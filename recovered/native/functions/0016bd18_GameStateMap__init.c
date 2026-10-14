/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016bd18 GameStateMap::init */

/* GameStateMap::init() */

void __thiscall GameStateMap::init(GameStateMap *this)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ScreenElement *pSVar5;
  CImage *pCVar6;
  undefined4 uVar7;
  ZombieCafe *pZVar8;
  ZCImageButton *pZVar9;
  TrueTypeTextElement *pTVar10;
  BitmapTextElement *pBVar11;
  uint uVar12;
  ulong uVar13;
  ImageElement *pIVar14;
  RandomCafeElement *this_00;
  MessageElement *this_01;
  NoticeDialog *pNVar15;
  ConfirmDialog *this_02;
  BuyToxinDialog *this_03;
  InviteDialog *this_04;
  InviteContactList *this_05;
  ReferralCodeDialog *this_06;
  TutorialArrow *this_07;
  TutorialSystem *this_08;
  uchar uVar16;
  uchar *puVar17;
  ccMat2x3 *pcVar18;
  int extraout_r1;
  int extraout_r1_00;
  bool bVar19;
  CImage *pCVar20;
  uint uVar21;
  undefined1 *puVar22;
  CImage *pCVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  GameStateMap *pGVar27;
  int iVar28;
  PackedImage *this_09;
  code *pcVar29;
  undefined4 uVar30;
  undefined4 *puVar31;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar63;
  undefined4 uStack_4;
  int *piVar32;
  undefined4 *puVar33;
  int *piVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  int *piVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  int *piVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
  int *piVar47;
  undefined4 *puVar48;
  int *piVar49;
  undefined4 *puVar50;
  int *piVar51;
  undefined4 *puVar52;
  int *piVar53;
  undefined4 *puVar54;
  undefined4 *puVar55;
  undefined4 *puVar56;
  int *piVar57;
  undefined4 *puVar58;
  undefined4 *puVar59;
  undefined4 *puVar60;
  int *piVar61;
  undefined4 *puVar62;
  
  iVar2 = DAT_0016bde4;
  puVar31 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  piVar32 = (int *)(&stack0xffffffec + DAT_0016bde4);
  puVar33 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  piVar34 = (int *)(&stack0xffffffec + DAT_0016bde4);
  puVar35 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar36 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar37 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  piVar38 = (int *)(&stack0xffffffec + DAT_0016bde4);
  puVar39 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar40 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  piVar41 = (int *)(&stack0xffffffec + DAT_0016bde4);
  puVar42 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar43 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar44 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar45 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar46 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  piVar47 = (int *)(&stack0xffffffec + DAT_0016bde4);
  puVar48 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  piVar49 = (int *)(&stack0xffffffec + DAT_0016bde4);
  puVar50 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  piVar51 = (int *)(&stack0xffffffec + DAT_0016bde4);
  puVar52 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  piVar53 = (int *)(&stack0xffffffec + DAT_0016bde4);
  puVar54 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar55 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar56 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  piVar57 = (int *)(&stack0xffffffec + DAT_0016bde4);
  puVar58 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar59 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  puVar60 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  piVar61 = (int *)(&stack0xffffffec + DAT_0016bde4);
  puVar62 = (undefined4 *)(&stack0xffffffec + DAT_0016bde4);
  *(int *)(&stack0x00000008 + DAT_0016bde4) = DAT_0016bdec + 0x16bd2c;
  *(undefined4 *)(&stack0x00000470 + DAT_0016bde4) =
       **(undefined4 **)(DAT_0016bdec + 0x16bd2c + DAT_0016bde8);
  L_PrintLog((char *)(DAT_0016bdf0 + 0x16bd38),(char *)(DAT_0016bdf4 + 0x16bd3a));
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_0016bdf8) = 3;
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(iVar3 + 0x44);
  *(undefined4 *)(this + 0x44) = 0;
  this[0x4c] = (GameStateMap)0x0;
  this[0x4d] = (GameStateMap)0x0;
  iVar3 = DAT_0016bdfc;
  *(undefined4 *)(this + 0x50) = 0;
  this[iVar3] = (GameStateMap)0x0;
  uVar4 = ZombieCafe::getEventRaid_Theme(*(ZombieCafe **)(this + 0xc));
  *(undefined4 *)(this + DAT_0016be00) = uVar4;
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMapImages(*(ZombieCafe **)(this + 0xc));
  pSVar5 = (ScreenElement *)operator_new(0x60);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 9;
  *puVar31 = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  ScreenElement::ScreenElement
            (pSVar5,0,0,0,*piVar32,(&stack0xfffffff0)[iVar2],
             *(ScreenElement **)(&stack0xfffffff4 + iVar2));
  *(ScreenElement **)(this + 0x14) = pSVar5;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0,false);
  *(CImage **)(this + 0x98) = pCVar6;
  uVar4 = CImage::getWidth(pCVar6);
  uVar7 = CapcomApp::getInstance();
  *(undefined4 *)(&stack0x0000000c + iVar2) = uVar7;
  uVar4 = __floatsisf(uVar4);
  __mulsf3(uVar4,*(undefined4 *)(*(int *)(&stack0x0000000c + iVar2) + 0x40));
  uVar4 = __fixsfsi();
  iVar3 = DAT_0016be04;
  iVar28 = *(int *)(&stack0x00000008 + iVar2);
  *(undefined4 *)(this + 0x90) = uVar4;
  piVar25 = *(int **)(iVar28 + iVar3);
  for (iVar3 = 0; iVar3 < *piVar25; iVar3 = iVar3 + 1) {
    pIVar14 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar14,*(CImage **)(this + 0x98),'\x12',true);
    (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),pIVar14);
    iVar28 = *(int *)(this + 0x1c) + 2;
    if (*(int *)(this + 0x18) < iVar28) {
      iVar26 = *(int *)(this + 0x18) * 2;
      if (iVar26 < iVar28) {
        iVar26 = iVar28;
      }
      Vector<ImageElement*>::resize((Vector<ImageElement*> *)(this + 0x18),iVar26,-1);
    }
    iVar28 = *(int *)(this + 0x1c);
    *(int *)(this + 0x1c) = iVar28 + 1;
    *(ImageElement **)((iVar28 + 1) * 4 + *(int *)(this + 0x20)) = pIVar14;
  }
  iVar28 = *(int *)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c228);
  iVar3 = 0;
  do {
    uVar4 = PackedImage::getImage
                      (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),*(int *)(iVar28 + iVar3),
                       false);
    iVar26 = iVar3 + 4;
    *(undefined4 *)(this + iVar3 + 0x54) = uVar4;
    uVar7 = DAT_0016c234;
    uVar4 = DAT_0016c230;
    iVar3 = iVar26;
  } while (iVar26 != 0x28);
  *(undefined4 *)(&stack0x00000110 + iVar2) = DAT_0016c22c;
  *(undefined4 *)(this + 0x3d8) = DAT_0016c234;
  *(undefined4 *)(this + 0x3dc) = uVar4;
  *(undefined4 *)(&stack0x00000104 + iVar2) = 0x3f800000;
  *(undefined4 *)(this + 0x3e0) = DAT_0016c238;
  *(undefined4 *)(this + 0x3e4) = uVar7;
  *(undefined4 *)(this + 1000) = 0;
  *(undefined4 *)(this + 0x3ec) = 0;
  *(undefined4 *)(&stack0x00000108 + iVar2) = 0;
  *(undefined4 *)(&stack0x0000010c + iVar2) = 0;
  *(undefined4 *)(&stack0x00000114 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000118 + iVar2) = 0;
  *(GameStateMap **)(&stack0x0000000c + iVar2) = this + 0x3d8;
  FUN_00164f88(&stack0x0000011c + iVar2,&stack0x00000104 + iVar2,this + 0x3d8);
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(&stack0x0000011c + iVar2);
  uVar7 = *(undefined4 *)(&stack0x00000130 + iVar2);
  *(undefined4 *)(this + 0x3dc) = *(undefined4 *)(&stack0x00000120 + iVar2);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(&stack0x0000012c + iVar2);
  *(undefined4 *)(this + 0x3e0) = *(undefined4 *)(&stack0x00000124 + iVar2);
  uVar4 = *(undefined4 *)(&stack0x00000010 + iVar2);
  *(undefined4 *)(this + 0x3e4) = *(undefined4 *)(&stack0x00000128 + iVar2);
  *(undefined4 *)(this + 1000) = uVar4;
  *(undefined4 *)(this + 0x3ec) = uVar7;
  iVar3 = SmDev();
  uVar4 = __addsf3(*(undefined4 *)(&stack0x00000010 + iVar2),
                   *(undefined4 *)
                    (iVar3 * 4 + *(int *)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c23c)));
  *(undefined4 *)(this + 1000) = uVar4;
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(this + 0x3ec);
  iVar3 = SmDev();
  uVar4 = __addsf3(*(undefined4 *)(&stack0x00000010 + iVar2),
                   *(undefined4 *)
                    (iVar3 * 4 + *(int *)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c240)));
  *(undefined4 *)(this + 0x3ec) = uVar4;
  iVar3 = *(int *)(&stack0x0000000c + iVar2);
  *(undefined4 *)(this + 0x3f0) = *(undefined4 *)(this + 0x3d8);
  *(undefined4 *)(this + 0x3f4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(this + 0x3f8) = *(undefined4 *)(this + 0x3e0);
  *(undefined4 *)(this + 0x3fc) = *(undefined4 *)(this + 0x3e4);
  *(undefined4 *)(this + 0x400) = *(undefined4 *)(this + 1000);
  *(undefined4 *)(this + 0x404) = uVar4;
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar30 = *(undefined4 *)(iVar3 + 0x44);
  uVar4 = __mulsf3(uVar4,DAT_0016c244);
  uVar7 = __subsf3(*(undefined4 *)(this + 0x400),uVar4);
  uVar4 = DAT_0016c248;
  *(undefined4 *)(this + 0x400) = uVar7;
  uVar4 = __mulsf3(uVar30,uVar4);
  iVar3 = DAT_0016c24c;
  uVar4 = __addsf3(*(undefined4 *)(this + DAT_0016c24c),uVar4);
  uVar7 = *(undefined4 *)(&stack0x0000000c + iVar2);
  *(undefined4 *)(this + iVar3) = uVar4;
  FUN_00164f88(&stack0x00000134 + iVar2,uVar7,&stack0x00000104 + iVar2);
  *(undefined4 *)(this + 0x408) = *(undefined4 *)(&stack0x00000134 + iVar2);
  *(undefined4 *)(this + 0x40c) = *(undefined4 *)(&stack0x00000138 + iVar2);
  *(undefined4 *)(this + 0x410) = *(undefined4 *)(&stack0x0000013c + iVar2);
  uVar4 = *(undefined4 *)(&stack0x00000144 + iVar2);
  *(undefined4 *)(this + 0x414) = *(undefined4 *)(&stack0x00000140 + iVar2);
  *(undefined4 *)(this + 0x418) = uVar4;
  *(undefined4 *)(this + 0x41c) = *(undefined4 *)(&stack0x00000148 + iVar2);
  iVar28 = SmDev();
  iVar3 = DAT_0016c254;
  iVar26 = *(int *)(&stack0x00000008 + iVar2);
  uVar4 = __addsf3(uVar4,*(undefined4 *)(iVar28 * 4 + *(int *)(iVar26 + DAT_0016c250)));
  *(undefined4 *)(this + 0x418) = uVar4;
  uVar4 = *(undefined4 *)(this + iVar3);
  iVar28 = SmDev();
  uVar4 = __addsf3(uVar4,*(undefined4 *)(iVar28 * 4 + *(int *)(iVar26 + DAT_0016c258)));
  *(undefined4 *)(this + iVar3) = uVar4;
  piVar25 = *(int **)(this + 0x14);
  pZVar8 = *(ZombieCafe **)(this + 0xc);
  puVar17 = *(uchar **)(pZVar8 + 0x1c);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  this_09 = *(PackedImage **)(pZVar8 + 0x7f8);
  iVar3 = ZombieCafe::getRecipeRank(pZVar8,puVar17);
  iVar3 = getCafeRank(this,iVar3);
  pCVar6 = (CImage *)
           PackedImage::getImage
                     (this_09,*(int *)(iVar3 * 4 + *(int *)(iVar26 + DAT_0016c25c)),false);
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
  *puVar33 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar9,'$',pCVar6,(CImage *)0x0,*piVar34,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  *(ZCImageButton **)(this + 0xdc) = pZVar9;
  (**(code **)(&stack0x00000010 + iVar2))(piVar25,pZVar9);
  if (*(char *)(*(int *)(this + 0xc) + 0x950) != '\0') {
    *(undefined4 *)(*(int *)(this + 0xdc) + 0x8c) =
         **(undefined4 **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c260);
  }
  iVar3 = DAT_0016c268;
  piVar25 = *(int **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c264);
  iVar26 = *piVar25;
  iVar28 = SmDev();
  uVar4 = FontManager::addFont
                    (iVar26,SUB41(*(undefined4 *)(DAT_0016c26c + iVar28 * 4 + 0x16c0ec),0));
  *(undefined4 *)(this + iVar3) = uVar4;
  iVar26 = *piVar25;
  iVar28 = SmDev();
  uVar4 = FontManager::addFont
                    (iVar26,SUB41(*(undefined4 *)(DAT_0016c270 + iVar28 * 4 + 0x16c09e),0));
  *(undefined4 *)(this + 0x458) = uVar4;
  piVar25 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  Vector<String>::elementAt((int)(&stack0x00000044 + iVar2));
  pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar35 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x12;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar10,&stack0x00000044 + iVar2,*(undefined4 *)(this + iVar3),0xffffffff);
  *(TrueTypeTextElement **)(this + 0xfc) = pTVar10;
  (**(code **)(&stack0x00000010 + iVar2))(piVar25,pTVar10);
  String::~String((String *)(&stack0x00000044 + iVar2));
  iVar3 = DAT_0016c27c;
  pGVar27 = this + 0xfc;
  piVar25 = *(int **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c278);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar25,*(TrueTypeTextElement **)pGVar27);
  L_PrintLog((char *)(iVar3 + 0x16c114),(char *)(DAT_0016c280 + 0x16c118));
  sprintf(&stack0x00000370 + iVar2,(char *)(DAT_0016c284 + 0x16c126),*(int *)(*piVar25 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x16c114),&stack0x00000370 + iVar2);
  this[300] = (GameStateMap)0x0;
  this[DAT_0016c288] = (GameStateMap)0x0;
  *(undefined1 *)(*(int *)pGVar27 + 0x7f) = 0x11;
  pTVar10 = *(TrueTypeTextElement **)pGVar27;
  *(ccMat2x3 **)(&stack0x00000030 + iVar2) = (ccMat2x3 *)(this + 0x3f0);
  TrueTypeTextElement::setBaseTransform(pTVar10,(ccMat2x3 *)(this + 0x3f0));
  iVar3 = **(int **)pGVar27;
  *(int **)(&stack0x00000010 + iVar2) = *(int **)pGVar27;
  *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(iVar3 + 0x18);
  uVar63 = __floatsidf(*(undefined4 *)(*(int *)(this + 0xdc) + 0xc));
  uVar63 = __muldf3((int)uVar63,(int)((ulonglong)uVar63 >> 0x20),DAT_0016c220,DAT_0016c224);
  *(int *)(&stack0x0000001c + iVar2) = (int)uVar63;
  *(int *)(&stack0x00000020 + iVar2) = (int)((ulonglong)uVar63 >> 0x20);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)(iVar3 * 4 + *(int *)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c28c));
  *(int *)(&stack0x0000002c + iVar2) = *(int *)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c28c);
  uVar63 = __extendsfdf2(uVar4);
  __adddf3(*(undefined4 *)(&stack0x0000001c + iVar2),*(undefined4 *)(&stack0x00000020 + iVar2),
           (int)uVar63,(int)((ulonglong)uVar63 >> 0x20));
  uVar4 = __fixdfsi();
  (**(code **)(&stack0x00000018 + iVar2))
            (*(undefined4 *)(&stack0x00000010 + iVar2),uVar4,
             *(undefined4 *)(*(int *)(this + 0xdc) + 0x10));
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(*(int *)(this + 0xc) + 0x680);
  iVar3 = **(int **)(this + 0x14);
  *(int **)(&stack0x00000010 + iVar2) = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(iVar3 + 0x2c);
  uVar4 = *(undefined4 *)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c290);
  Vector<String>::elementAt((int)(&stack0x0000004c + iVar2));
  *(int **)(&stack0x00000034 + iVar2) = piVar25;
  *(undefined4 *)(&stack0x00000040 + iVar2) = uVar4;
  String::valueOf((int)(&stack0x00000054 + iVar2));
  String::operator+((String *)(&stack0x0000005c + iVar2),&stack0x0000004c + iVar2,
                    &stack0x00000054 + iVar2);
  iVar28 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_0016c294 + iVar3 * 4 + 0x16c218) + 0x136) * 4 + iVar28);
  pBVar11 = (BitmapTextElement *)operator_new(0xc0);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
  *puVar36 = 0xff000000;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x11;
  BitmapTextElement::BitmapTextElement(pBVar11,&stack0x0000005c + iVar2,uVar4,0xffffffff);
  *(BitmapTextElement **)(this + 0x100) = pBVar11;
  (**(code **)(&stack0x00000018 + iVar2))(*(undefined4 *)(&stack0x00000010 + iVar2),pBVar11);
  String::~String((String *)(&stack0x0000005c + iVar2));
  String::~String((String *)(&stack0x00000054 + iVar2));
  String::~String((String *)(&stack0x0000004c + iVar2));
  pcVar18 = *(ccMat2x3 **)(&stack0x0000000c + iVar2);
  *(undefined1 *)(*(int *)(this + 0x100) + 0x7f) = 0x11;
  BitmapTextElement::setBaseTransform(*(BitmapTextElement **)(this + 0x100),pcVar18);
  (**(code **)(**(int **)(this + 0x100) + 0x18))
            (*(int **)(this + 0x100),*(undefined4 *)(*(int *)(this + 0xdc) + 0xc),
             *(undefined4 *)(*(int *)(this + 0xdc) + 0x10));
  *(undefined4 *)(this + 0x128) = 0;
  iVar3 = *(int *)(*(int *)(this + 0xc) + 0x680) + -2;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  Platform::getAppTime();
  iVar28 = *(int *)(&stack0x00000008 + iVar2);
  uVar21 = (uint)**(byte **)(iVar28 + DAT_0016c6b0);
  if (uVar21 == 0) {
LAB_0016c344:
    *(uint *)(&stack0x00000018 + iVar2) = uVar21;
  }
  else {
    if ((**(int **)(iVar28 + DAT_0016c6b4) <= *(int *)(*(int *)(this + 0xc) + 0x680)) &&
       (uVar12 = __fixunsdfsi(), **(uint **)(iVar28 + DAT_0016c6b8) < uVar12)) {
      uVar21 = **(uint **)(iVar28 + DAT_0016c6bc);
      if (uVar12 < uVar21) {
        FUN_0016d4c6();
      }
      *(undefined4 *)(&stack0x00000018 + iVar2) = 0;
      FUN_0016d4dc();
      goto LAB_0016c344;
    }
    *(undefined4 *)(&stack0x00000018 + iVar2) = 0;
  }
  *(undefined4 *)(&stack0x0000001c + iVar2) = 2;
  *(int *)(&stack0x00000010 + iVar2) = iVar3;
  while (*(int *)(&stack0x00000010 + iVar2) <
         *(int *)(&stack0x0000001c + iVar2) + *(int *)(*(int *)(this + 0xc) + 0x680)) {
    MapCafe::MapCafe((MapCafe *)(&stack0x000001a0 + iVar2));
    iVar28 = *(int *)(&stack0x00000008 + iVar2);
    *(undefined4 *)(&stack0x000001d8 + iVar2) = *(undefined4 *)(&stack0x00000010 + iVar2);
    puVar22 = *(undefined1 **)(iVar28 + DAT_0016c6c0);
    pZVar8 = *(ZombieCafe **)(this + 0xc);
    uVar1 = *puVar22;
    *(undefined1 **)(&stack0x00000014 + iVar2) = puVar22;
    __aeabi_idivmod(*(undefined4 *)(&stack0x00000010 + iVar2),uVar1);
    iVar3 = DAT_0016c6cc;
    uVar12 = **(int **)(iVar28 + DAT_0016c6c4) - 1;
    uVar21 = (uint)*(byte *)(*(int *)(pZVar8 + DAT_0016c6c8) + extraout_r1);
    if ((int)uVar12 < (int)(uint)*(byte *)(*(int *)(pZVar8 + DAT_0016c6c8) + extraout_r1)) {
      uVar21 = uVar12;
    }
    (&stack0x000001dc)[iVar2] = (char)uVar21;
    iVar26 = *(int *)(&stack0x00000018 + iVar2);
    iVar28 = *(int *)(extraout_r1 * 4 + *(int *)(pZVar8 + DAT_0016c6cc));
    (&stack0x000001f0)[iVar2] = (byte)((uint)((iVar28 >> 0x1f) - iVar28) >> 0x1f);
    (&stack0xffffffec)[DAT_0016c6d0 + iVar2] = 0;
    if ((iVar26 == 0) && (iVar28 = ZombieCafe::isEventCafeTheme(pZVar8,uVar21 & 0xff), iVar28 != 0))
    {
      (&stack0x000001dc)[iVar2] = 0;
    }
    iVar28 = ZombieCafe::isHeroCafeTheme
                       (*(ZombieCafe **)(this + 0xc),(uint)(byte)(&stack0x000001dc)[iVar2]);
    if (iVar28 != 0) {
      (&stack0x000001dc)[iVar2] = 0;
    }
    piVar25 = *(int **)(this + 0x14);
    *(undefined4 *)(&stack0x00000024 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
    uVar4 = PackedImage::getImage
                      (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),
                       *(int *)((uint)(byte)(&stack0x000001dc)[iVar2] * 4 +
                               *(int *)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c6d4)),false);
    *(undefined4 *)(&stack0x00000038 + iVar2) = uVar4;
    pZVar9 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
    pCVar6 = *(CImage **)(&stack0x00000038 + iVar2);
    *puVar37 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    ZCImageButton::ZCImageButton
              (pZVar9,'$',pCVar6,(CImage *)0x0,*piVar38,*(int *)(&stack0xfffffff0 + iVar2),
               (bool)(&stack0xfffffff4)[iVar2]);
    *(ZCImageButton **)(&stack0x000001a0 + iVar2) = pZVar9;
    (**(code **)(&stack0x00000024 + iVar2))(piVar25,pZVar9);
    piVar25 = *(int **)(this + 0x14);
    if ((&stack0x000001f0)[iVar2] == '\0') {
      uVar4 = *(undefined4 *)(this + DAT_0016c960);
      *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
      String::String((String *)(&stack0x0000009c + iVar2),0);
      pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
      *puVar44 = 0;
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x12;
      TrueTypeTextElement::TrueTypeTextElement(pTVar10,&stack0x0000009c + iVar2,uVar4,0xffffffff);
      *(TrueTypeTextElement **)(&stack0x000001c0 + iVar2) = pTVar10;
      (**(code **)(&stack0x00000014 + iVar2))(piVar25,pTVar10);
      String::~String((String *)(&stack0x0000009c + iVar2));
      piVar25 = *(int **)(&stack0x00000034 + iVar2);
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*piVar25,
                 *(TrueTypeTextElement **)(&stack0x000001c0 + iVar2));
      L_PrintLog((char *)(DAT_0016c964 + 0x16c75e),(char *)(DAT_0016c968 + 0x16c760));
      sprintf(&stack0x00000370 + iVar2,(char *)(DAT_0016c96c + 0x16c76e),*(int *)(*piVar25 + 4) + 1)
      ;
      L_PrintLog((char *)(DAT_0016c970 + 0x16c77a),&stack0x00000370 + iVar2);
      piVar25 = *(int **)(&stack0x000001c0 + iVar2);
      pcVar29 = *(code **)(*piVar25 + 0x44);
      ZombieCafe::getEnemyCafeName((int)(&stack0x000000a4 + iVar2));
      (*pcVar29)(piVar25,&stack0x000000a4 + iVar2);
      String::~String((String *)(&stack0x000000a4 + iVar2));
      *(undefined4 *)(&stack0x000001a4 + iVar2) = 0;
      *(undefined4 *)(&stack0x000001ac + iVar2) = 0;
      *(undefined4 *)(&stack0x000001b0 + iVar2) = 0;
      *(undefined4 *)(&stack0x000001b4 + iVar2) = 0;
      *(undefined4 *)(&stack0x000001b8 + iVar2) = 0;
    }
    else {
      uVar4 = *(undefined4 *)(this + DAT_0016c6d8);
      *(undefined4 *)(&stack0x00000038 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
      *(undefined4 *)(&stack0x00000024 + iVar2) = uVar4;
      Vector<String>::elementAt((int)(&stack0x00000064 + iVar2));
      iVar28 = *(int *)(this + 0xc);
      __aeabi_idivmod(*(undefined4 *)(&stack0x000001d8 + iVar2),
                      **(undefined1 **)(&stack0x00000014 + iVar2));
      uVar13 = __divsi3(*(undefined4 *)(extraout_r1_00 * 4 + *(int *)(iVar28 + iVar3)),1000);
      StringUtil::createTimeString((StringUtil *)(&stack0x0000006c + iVar2),uVar13,'\x02');
      String::operator+((String *)(&stack0x00000074 + iVar2),&stack0x00000064 + iVar2,
                        &stack0x0000006c + iVar2);
      pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
      *puVar39 = 0;
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x12;
      TrueTypeTextElement::TrueTypeTextElement
                (pTVar10,&stack0x00000074 + iVar2,*(undefined4 *)(&stack0x00000024 + iVar2),
                 0xffffffff);
      *(TrueTypeTextElement **)(&stack0x000001c0 + iVar2) = pTVar10;
      (**(code **)(&stack0x00000038 + iVar2))(piVar25,pTVar10);
      String::~String((String *)(&stack0x00000074 + iVar2));
      String::~String((String *)(&stack0x0000006c + iVar2));
      String::~String((String *)(&stack0x00000064 + iVar2));
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)**(undefined4 **)(&stack0x00000034 + iVar2),
                 *(TrueTypeTextElement **)(&stack0x000001c0 + iVar2));
      L_PrintLog((char *)(DAT_0016c6e0 + 0x16c4c6),(char *)(DAT_0016c6e4 + 0x16c4c8));
      sprintf(&stack0x00000370 + iVar2,(char *)(DAT_0016c6ec + 0x16c4d8),
              *(int *)(**(int **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c6e8) + 4) + 1);
      L_PrintLog((char *)(DAT_0016c6f0 + 0x16c4e8),&stack0x00000370 + iVar2);
      piVar25 = *(int **)(this + 0x14);
      iVar3 = *(int *)(this + 0xc);
      *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
      pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar3 + 0x7f8),0xe,false);
      pIVar14 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar14,pCVar6,'\f',true);
      *(ImageElement **)(&stack0x000001a4 + iVar2) = pIVar14;
      (**(code **)(&stack0x00000014 + iVar2))(piVar25,pIVar14);
      iVar3 = DAT_0016c6f4;
      piVar25 = *(int **)(this + 0x14);
      *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
      uVar4 = PackedImage::getImage
                        (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0016c6f4),0xb,false);
      *(undefined4 *)(&stack0x00000024 + iVar2) = uVar4;
      pZVar9 = (ZCImageButton *)operator_new(0xa0);
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
      pCVar6 = *(CImage **)(&stack0x00000024 + iVar2);
      *puVar40 = 0;
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
      ZCImageButton::ZCImageButton
                (pZVar9,'$',pCVar6,(CImage *)0x0,*piVar41,*(int *)(&stack0xfffffff0 + iVar2),
                 (bool)(&stack0xfffffff4)[iVar2]);
      *(ZCImageButton **)(&stack0x000001ac + iVar2) = pZVar9;
      (**(code **)(&stack0x00000014 + iVar2))(piVar25,pZVar9);
      piVar25 = *(int **)(this + 0x14);
      *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
      pCVar6 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),0x24,false);
      pIVar14 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar14,pCVar6,'\f',true);
      *(ImageElement **)(&stack0x000001b0 + iVar2) = pIVar14;
      (**(code **)(&stack0x00000014 + iVar2))(piVar25,pIVar14);
      piVar25 = *(int **)(this + 0x14);
      *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
      String::String((String *)(&stack0x0000007c + iVar2),0);
      iVar28 = *(int *)(this + 0xc);
      iVar3 = SmDev();
      uVar4 = *(undefined4 *)((*(int *)(DAT_0016c6f8 + iVar3 * 4 + 0x16c5c8) + 0x136) * 4 + iVar28);
      pBVar11 = (BitmapTextElement *)operator_new(0xc0);
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x12;
      *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
      *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
      *puVar42 = 0xffffffff;
      BitmapTextElement::BitmapTextElement(pBVar11,&stack0x0000007c + iVar2,uVar4,0xff000000);
      *(BitmapTextElement **)(&stack0x000001b4 + iVar2) = pBVar11;
      (**(code **)(&stack0x00000014 + iVar2))(piVar25,pBVar11);
      String::~String((String *)(&stack0x0000007c + iVar2));
      snprintf(&stack0x000002f0 + iVar2,0x80,(char *)(DAT_0016c700 + 0x16c600),
               **(undefined4 **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c6fc));
      piVar25 = *(int **)(&stack0x000001b4 + iVar2);
      pcVar29 = *(code **)(*piVar25 + 0x44);
      String::String((String *)(&stack0x00000084 + iVar2),&stack0x000002f0 + iVar2);
      (*pcVar29)(piVar25,&stack0x00000084 + iVar2);
      String::~String((String *)(&stack0x00000084 + iVar2));
      *(undefined1 *)(*(int *)(&stack0x000001b4 + iVar2) + 0x7f) = 0x11;
      piVar25 = *(int **)(&stack0x000001ac + iVar2);
      *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
      String::String((String *)(&stack0x0000008c + iVar2),0);
      iVar28 = *(int *)(this + 0xc);
      iVar3 = SmDev();
      uVar4 = *(undefined4 *)((*(int *)(DAT_0016c704 + iVar3 * 4 + 0x16c662) + 0x136) * 4 + iVar28);
      pBVar11 = (BitmapTextElement *)operator_new(0xc0);
      *puVar43 = 0xff000000;
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x12;
      *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
      *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
      BitmapTextElement::BitmapTextElement(pBVar11,&stack0x0000008c + iVar2,uVar4,0xffffffff);
      *(BitmapTextElement **)(&stack0x000001b8 + iVar2) = pBVar11;
      (**(code **)(&stack0x00000014 + iVar2))(piVar25,pBVar11);
      String::~String((String *)(&stack0x0000008c + iVar2));
      piVar25 = *(int **)(&stack0x000001b8 + iVar2);
      pcVar29 = *(code **)(*piVar25 + 0x44);
      String::String((String *)(&stack0x00000094 + iVar2),(char *)(DAT_0016c708 + 0x16c696));
      (*pcVar29)(piVar25,&stack0x00000094 + iVar2);
      String::~String((String *)(&stack0x00000094 + iVar2));
      *(undefined1 *)(*(int *)(&stack0x000001b8 + iVar2) + 0x7f) = 0x11;
    }
    pTVar10 = *(TrueTypeTextElement **)(&stack0x000001c0 + iVar2);
    pcVar18 = *(ccMat2x3 **)(&stack0x00000030 + iVar2);
    pTVar10[0x7f] = (TrueTypeTextElement)0x11;
    TrueTypeTextElement::setBaseTransform(pTVar10,pcVar18);
    piVar25 = *(int **)(&stack0x000001c0 + iVar2);
    *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar25 + 0x18);
    uVar4 = *(undefined4 *)(*(int *)(&stack0x000001a0 + iVar2) + 0xc);
    iVar3 = SmDev();
    uVar63 = __floatsidf(uVar4);
    uVar63 = __muldf3((int)uVar63,(int)((ulonglong)uVar63 >> 0x20),DAT_0016c958,DAT_0016c95c);
    *(int *)(&stack0x00000024 + iVar2) = (int)uVar63;
    *(int *)(&stack0x00000028 + iVar2) = (int)((ulonglong)uVar63 >> 0x20);
    uVar63 = __extendsfdf2(*(undefined4 *)(*(int *)(&stack0x0000002c + iVar2) + iVar3 * 4));
    __adddf3(*(undefined4 *)(&stack0x00000024 + iVar2),*(undefined4 *)(&stack0x00000028 + iVar2),
             (int)uVar63,(int)((ulonglong)uVar63 >> 0x20));
    uVar4 = __fixdfsi();
    (**(code **)(&stack0x00000014 + iVar2))
              (piVar25,uVar4,*(undefined4 *)(*(int *)(&stack0x000001a0 + iVar2) + 0x10));
    piVar25 = *(int **)(this + 0x14);
    *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
    Vector<String>::elementAt((int)(&stack0x000000ac + iVar2));
    String::valueOf((int)(&stack0x000000b4 + iVar2));
    String::operator+((String *)(&stack0x000000bc + iVar2),&stack0x000000ac + iVar2,
                      &stack0x000000b4 + iVar2);
    iVar28 = *(int *)(this + 0xc);
    iVar3 = SmDev();
    uVar4 = *(undefined4 *)((*(int *)(DAT_0016c978 + iVar3 * 4 + 0x16c86a) + 0x136) * 4 + iVar28);
    pBVar11 = (BitmapTextElement *)operator_new(0xc0);
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
    *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
    *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
    *puVar45 = 0xff000000;
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x11;
    BitmapTextElement::BitmapTextElement(pBVar11,&stack0x000000bc + iVar2,uVar4,0xffffffff);
    *(BitmapTextElement **)(&stack0x000001c4 + iVar2) = pBVar11;
    (**(code **)(&stack0x00000014 + iVar2))(piVar25,pBVar11);
    String::~String((String *)(&stack0x000000bc + iVar2));
    String::~String((String *)(&stack0x000000b4 + iVar2));
    String::~String((String *)(&stack0x000000ac + iVar2));
    pBVar11 = *(BitmapTextElement **)(&stack0x000001c4 + iVar2);
    pcVar18 = *(ccMat2x3 **)(&stack0x0000000c + iVar2);
    pBVar11[0x7f] = (BitmapTextElement)0x11;
    BitmapTextElement::setBaseTransform(pBVar11,pcVar18);
    (**(code **)(**(int **)(&stack0x000001c4 + iVar2) + 0x18))
              (*(int **)(&stack0x000001c4 + iVar2),
               *(undefined4 *)(*(int *)(&stack0x000001a0 + iVar2) + 0xc),
               *(undefined4 *)(*(int *)(&stack0x000001a0 + iVar2) + 0x10));
    *(undefined4 *)(&stack0x000001ec + iVar2) = 0;
    MapCafe::MapCafe((MapCafe *)(&stack0x0000014c + iVar2),(MapCafe *)(&stack0x000001a0 + iVar2));
    Vector<GameStateMap::MapCafe>::addElement
              ((Vector<GameStateMap::MapCafe> *)(this + 0xd0),&stack0x0000014c + iVar2);
    String::~String((String *)(&stack0x0000017c + iVar2));
    String::~String((String *)(&stack0x000001d0 + iVar2));
    *(int *)(&stack0x00000010 + iVar2) = *(int *)(&stack0x00000010 + iVar2) + 1;
  }
  iVar3 = *(int *)(*(int *)(this + 0x44) * 4 + *(int *)(*(int *)(this + 0xc) + 0x698));
  if ((iVar3 < **(int **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016c97c)) && (0 < iVar3)) {
    (**(code **)(*(int *)this + 0x6c))(this,0);
  }
  if (*(int *)(&stack0x00000018 + iVar2) != 0) {
    (**(code **)(*(int *)this + 0x70))(this,*(undefined4 *)(&stack0x0000003c + iVar2));
  }
  addWeekRaidShop(this);
  addEventRaidShop(this);
  addEventRaid2Shop(this);
  addEventRaid3Shop(this);
  addAmpouleRaidShop(this);
  addColosseum(this);
  addHeroShop(this);
  for (iVar3 = 0; iVar3 < *(int *)(this + 0xd4) + 1; iVar3 = iVar3 + 1) {
    MapCafe::MapCafe((MapCafe *)(&stack0x000001a0 + iVar2));
    MapCafe::MapCafe((MapCafe *)(&stack0x000001f4 + iVar2),
                     (MapCafe *)(*(int *)(this + 0xd8) + iVar3 * 0x54));
    MapCafe::operator=((MapCafe *)(&stack0x000001a0 + iVar2),(MapCafe *)(&stack0x000001f4 + iVar2));
    String::~String((String *)(&stack0x00000224 + iVar2));
    iVar28 = ZombieCafe::isEventCafeTheme
                       (*(ZombieCafe **)(this + 0xc),(uint)(byte)(&stack0x000001dc)[iVar2]);
    if (iVar28 != 0) {
      piVar25 = *(int **)(this + 0x14);
      *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
      uVar4 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x23,false);
      *(undefined4 *)(&stack0x00000010 + iVar2) = uVar4;
      pIVar14 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar14,*(CImage **)(&stack0x00000010 + iVar2),'\f',true);
      *(ImageElement **)(&stack0x000001a8 + iVar2) = pIVar14;
      (**(code **)(&stack0x0000000c + iVar2))(piVar25,pIVar14);
      if ((&stack0x000001f0)[iVar2] != '\0') {
        (**(code **)(**(int **)(&stack0x000001a8 + iVar2) + 0x20))
                  (*(int **)(&stack0x000001a8 + iVar2),0);
      }
      MapCafe::MapCafe((MapCafe *)(&stack0x00000248 + iVar2),(MapCafe *)(&stack0x000001a0 + iVar2));
      Vector<GameStateMap::MapCafe>::setElementAt
                ((Vector<GameStateMap::MapCafe> *)(this + 0xd0),&stack0x00000248 + iVar2,iVar3);
      String::~String((String *)(&stack0x00000278 + iVar2));
    }
    String::~String((String *)(&stack0x000001d0 + iVar2));
  }
  piVar25 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),1,false);
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
  *puVar46 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar9,'$',pCVar6,(CImage *)0x0,*piVar47,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  *(ZCImageButton **)(this + 0x24) = pZVar9;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,pZVar9);
  piVar25 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),4,false);
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
  *puVar48 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar9,'\n',pCVar6,(CImage *)0x0,*piVar49,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  *(ZCImageButton **)(this + 0x28) = pZVar9;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,pZVar9);
  piVar25 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),5,false);
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
  *puVar50 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar9,'\"',pCVar6,(CImage *)0x0,*piVar51,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  *(ZCImageButton **)(this + 0x2c) = pZVar9;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,pZVar9);
  piVar25 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),6,false);
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
  *puVar52 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar9,'\x12',pCVar6,(CImage *)0x0,*piVar53,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  *(ZCImageButton **)(this + 0x38) = pZVar9;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,pZVar9);
  piVar25 = *(int **)(this + 0x38);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  Vector<String>::elementAt((int)(&stack0x000000c4 + iVar2));
  iVar28 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_0016cf10 + iVar3 * 4 + 0x16cb66) + 0x136) * 4 + iVar28);
  pBVar11 = (BitmapTextElement *)operator_new(0xc0);
  *puVar54 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x12;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement(pBVar11,&stack0x000000c4 + iVar2,uVar4,0xffffffff);
  *(BitmapTextElement **)(this + 0x80) = pBVar11;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,pBVar11);
  String::~String((String *)(&stack0x000000c4 + iVar2));
  piVar25 = *(int **)(this + 0x38);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  String::String((String *)(&stack0x000000cc + iVar2),0);
  iVar28 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_0016cf14 + iVar3 * 4 + 0x16cbc4) + 0x136) * 4 + iVar28);
  pBVar11 = (BitmapTextElement *)operator_new(0xc0);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x12;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
  *puVar55 = 0xff000000;
  BitmapTextElement::BitmapTextElement(pBVar11,&stack0x000000cc + iVar2,uVar4,0xffffffff);
  *(BitmapTextElement **)(this + 0x84) = pBVar11;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,pBVar11);
  String::~String((String *)(&stack0x000000cc + iVar2));
  if (*(char *)(*(int *)(this + 0xc) + DAT_0016cf18) == '\0') {
    piVar25 = *(int **)(this + 0x84);
    pcVar29 = *(code **)(*piVar25 + 0x44);
    Vector<String>::elementAt((int)(&stack0x000000d4 + iVar2));
    (*pcVar29)(piVar25,&stack0x000000d4 + iVar2);
    String::~String((String *)(&stack0x000000d4 + iVar2));
  }
  FUN_001652d4(*(undefined4 *)(this + 0x80),
               ((int)*(short *)(*(int *)(this + 0x38) + 0xc) >> 1) << 0x10 |
               (int)*(short *)(*(int *)(this + 0x38) + 0x10) >> 1 & 0xffffU);
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(int *)(*(int *)(this + 0x38) + 0xc) / 2,
             (*(int *)(*(int *)(this + 0x38) + 0x10) * 3) / 2);
  piVar25 = *(int **)(this + 0x38);
  (**(code **)(*piVar25 + 0x18))(piVar25,piVar25[3],piVar25[4] << 1);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x28),100);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x2c),100);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x24),100);
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x420) = 0;
  this[0x180] = (GameStateMap)0x0;
  piVar25 = *(int **)(this + 0x14);
  iVar3 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  uVar4 = PackedImage::getImage(*(PackedImage **)(iVar3 + 0x7f8),3,false);
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar4;
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
  pCVar6 = *(CImage **)(&stack0x00000010 + iVar2);
  *puVar56 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar9,'$',pCVar6,(CImage *)0x0,*piVar57,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  *(ZCImageButton **)(this + 0x130) = pZVar9;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,pZVar9);
  *(undefined4 *)(*(int *)(this + 0x130) + 0x8c) = 0xff000000;
  piVar25 = *(int **)(this + 0x14);
  uVar4 = *(undefined4 *)(this + DAT_0016cf20);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  Vector<String>::elementAt((int)(&stack0x000000dc + iVar2));
  pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar58 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x12;
  TrueTypeTextElement::TrueTypeTextElement(pTVar10,&stack0x000000dc + iVar2,uVar4,0xffffffff);
  *(TrueTypeTextElement **)(this + 0x150) = pTVar10;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,pTVar10);
  String::~String((String *)(&stack0x000000dc + iVar2));
  iVar3 = DAT_0016cf2c;
  piVar25 = *(int **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016cf28);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar25,*(TrueTypeTextElement **)(this + 0x150));
  L_PrintLog((char *)(iVar3 + 0x16cd66),(char *)(DAT_0016cf30 + 0x16cd6a));
  sprintf(&stack0x00000370 + iVar2,(char *)(DAT_0016cf34 + 0x16cd78),*(int *)(*piVar25 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x16cd66),&stack0x00000370 + iVar2);
  pcVar18 = *(ccMat2x3 **)(&stack0x00000030 + iVar2);
  *(undefined1 *)(*(int *)(this + 0x150) + 0x7f) = 0x11;
  TrueTypeTextElement::setBaseTransform(*(TrueTypeTextElement **)(this + 0x150),pcVar18);
  piVar25 = *(int **)(this + 0x150);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x18);
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x130) + 0xc));
  iVar3 = SmDev();
  __addsf3(uVar4,*(undefined4 *)
                  (iVar3 * 4 + *(int *)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016cf38)));
  uVar4 = __fixsfsi();
  (**(code **)(&stack0x0000000c + iVar2))
            (piVar25,uVar4,*(undefined4 *)(*(int *)(this + 0x130) + 0x10));
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x15c) = 0xffffffff;
  String::operator=((String *)(this + 0x160),0);
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  MapCafe::MapCafe((MapCafe *)(&stack0x0000029c + iVar2),(MapCafe *)(this + 0x130));
  Vector<GameStateMap::MapCafe>::addElement
            ((Vector<GameStateMap::MapCafe> *)(this + 0xc4),&stack0x0000029c + iVar2);
  String::~String((String *)(&stack0x000002cc + iVar2));
  updateList(this);
  iVar3 = DAT_0016cf40;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0016cf3c) = 0;
  iVar28 = CCServer::IsConnected(*(void **)(*(int *)(this + 0xc) + iVar3));
  if (iVar28 != 0) {
    CCServer::UpdateFriends
              (*(void **)((int)*(void **)(this + 0xc) + iVar3),
               *(_func_void_void_ptr **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016cf44),
               *(void **)(this + 0xc));
  }
  piVar25 = *(int **)(this + 0x14);
  pcVar29 = *(code **)(*piVar25 + 0x2c);
  this_00 = (RandomCafeElement *)operator_new(100);
  RandomCafeElement::RandomCafeElement(this_00,this);
  *(RandomCafeElement **)(this + 0x3d0) = this_00;
  (*pcVar29)(piVar25,this_00);
  piVar25 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  Vector<String>::elementAt((int)(&stack0x000000e4 + iVar2));
  iVar28 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_0016cf4c + iVar3 * 4 + 0x16ce9c) + 0x136) * 4 + iVar28);
  pBVar11 = (BitmapTextElement *)operator_new(0xc0);
  *puVar59 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x12;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement(pBVar11,&stack0x000000e4 + iVar2,uVar4,0xffffffff);
  *(BitmapTextElement **)(this + 0x3d4) = pBVar11;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,pBVar11);
  String::~String((String *)(&stack0x000000e4 + iVar2));
  uVar4 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0016cf50),false);
  *(undefined4 *)(this + 0x428) = uVar4;
  uVar4 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  iVar3 = DAT_0016cf54;
  *(undefined4 *)(this + DAT_0016cf54) = uVar4;
  this_01 = (MessageElement *)operator_new(0x90);
  MessageElement::MessageElement(this_01,*(CImage ***)(this + 0x428),'\f');
  *(MessageElement **)(this + 0x430) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,0x69);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))
            (*(int **)(this + 0x14),*(undefined4 *)(this + 0x430));
  pNVar15 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (pNVar15,*(CImage **)(*(int *)(this + iVar3) + 0x14),
             *(CImage **)(*(int *)(this + 0x428) + 0x28),extraout_s0);
  iVar28 = DAT_0016d17c;
  *(NoticeDialog **)(this + DAT_0016d17c) = pNVar15;
  ScreenElement::setOrder((ScreenElement *)pNVar15,4);
  (**(code **)(**(int **)(this + iVar28) + 0x1c))(*(int **)(this + iVar28),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))
            (*(int **)(this + 0x14),*(undefined4 *)(this + iVar28));
  this_02 = (ConfirmDialog *)operator_new(0x9c);
  pCVar6 = *(CImage **)(*(int *)(this + iVar3) + 0x14);
  pCVar20 = *(CImage **)(*(int *)(this + 0x428) + 0x28);
  pCVar23 = *(CImage **)(*(int *)(this + 0x428) + 0x44);
  *puVar60 = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0x40000000;
  ConfirmDialog::ConfirmDialog
            (this_02,pCVar6,pCVar20,pCVar23,*piVar61,extraout_s0_00,
             *(CImage **)(&stack0xfffffff0 + iVar2));
  iVar3 = DAT_0016d180;
  *(ConfirmDialog **)(this + DAT_0016d180) = this_02;
  ScreenElement::setOrder((ScreenElement *)this_02,99);
  (**(code **)(**(int **)(this + iVar3) + 0x1c))(*(int **)(this + iVar3),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))
            (*(int **)(this + 0x14),*(undefined4 *)(this + iVar3));
  this_03 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_03);
  iVar3 = DAT_0016d184;
  *(BuyToxinDialog **)(this + DAT_0016d184) = this_03;
  ScreenElement::setOrder((ScreenElement *)this_03,0xffffffc8);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))
            (*(int **)(this + 0x14),*(undefined4 *)(this + iVar3));
  (**(code **)(**(int **)(this + iVar3) + 0x1c))(*(int **)(this + iVar3),0x12);
  (**(code **)(**(int **)(this + iVar3) + 0x20))(*(int **)(this + iVar3),0);
  piVar25 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  this_04 = (InviteDialog *)operator_new(0xd4);
  InviteDialog::InviteDialog(this_04,extraout_s0_01);
  *(InviteDialog **)(this + 0x438) = this_04;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,this_04);
  (**(code **)(**(int **)(this + 0x438) + 0x1c))(*(int **)(this + 0x438),0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x438),5);
  piVar25 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  this_05 = (InviteContactList *)operator_new(0xb4);
  InviteContactList::InviteContactList(this_05);
  iVar3 = DAT_0016d188;
  *(InviteContactList **)(this + DAT_0016d188) = this_05;
  (**(code **)(&stack0x0000000c + iVar2))(piVar25,this_05);
  (**(code **)(**(int **)(this + iVar3) + 0x1c))(*(int **)(this + iVar3),0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x438),6);
  piVar25 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar25 + 0x2c);
  this_06 = (ReferralCodeDialog *)operator_new(0xa4);
  ReferralCodeDialog::ReferralCodeDialog(this_06);
  pcVar29 = *(code **)(&stack0x0000000c + iVar2);
  *(ReferralCodeDialog **)(this + 0x448) = this_06;
  (*pcVar29)(piVar25,this_06);
  (**(code **)(**(int **)(this + 0x448) + 0x1c))(*(int **)(this + 0x448),0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x448),7);
  pSVar5 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar5,(ScreenElement *)0x0);
  *(ScreenElement **)(this + DAT_0016d18c) = pSVar5;
  this_07 = (TutorialArrow *)operator_new(0x7c);
  TutorialArrow::TutorialArrow(this_07);
  *(TutorialArrow **)(this + 0x440) = this_07;
  iVar3 = DAT_0016d190;
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),this_07);
  iVar28 = *(int *)(*(int *)(this + 0xc) + iVar3);
  uVar4 = *(undefined4 *)(this + 0x440);
  iVar26 = *(int *)(&stack0x00000008 + iVar2);
  *(undefined4 *)(iVar28 + DAT_0016d194) = *(undefined4 *)(this + 0x430);
  *(undefined4 *)(iVar28 + 0x788) = uVar4;
  *(undefined4 *)(iVar28 + 0x778) = *(undefined4 *)(iVar26 + DAT_0016d198);
  *(GameStateMap **)(iVar28 + DAT_0016d19c) = this;
  iVar28 = TutorialSystem::isTutorialCompleted
                     (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar3),'%');
  if (iVar28 == 0) {
    TutorialSystem::setTutorialIncomplete(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar3),'$');
    uVar16 = '\x1d';
    bVar19 = false;
    this_08 = *(TutorialSystem **)(*(int *)(this + 0xc) + iVar3);
  }
  else {
    iVar28 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar3),'2');
    if (((iVar28 != 0) ||
        (iVar28 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar3),'3'), iVar28 != 0))
       || (iVar28 = TutorialSystem::isTutorialCompleted
                              (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar3),'4'), iVar28 != 0)
       ) goto LAB_0016d1be;
    if (*(char *)(*(int *)(this + 0xc) + DAT_0016d1a0) != '\0') {
      displayReferralDescription(this);
      goto LAB_0016d1be;
    }
    iVar28 = CCFacebook::IsLoggedIn(*(void **)(*(int *)(this + 0xc) + DAT_0016d1a4));
    if (iVar28 == 0) {
      this_08 = *(TutorialSystem **)(*(int *)(this + 0xc) + iVar3);
      uVar16 = '5';
    }
    else {
      this_08 = *(TutorialSystem **)(*(int *)(this + 0xc) + iVar3);
      uVar16 = '3';
      if (*(int *)(this + 200) < 1) {
        uVar16 = '4';
      }
    }
    bVar19 = true;
  }
  TutorialSystem::triggerEvent(this_08,uVar16,bVar19);
LAB_0016d1be:
  if (this[DAT_0016d4e8] != (GameStateMap)0x0) {
    pNVar15 = *(NoticeDialog **)(this + DAT_0016d4f0);
    Vector<String>::elementAt((int)(&stack0x000000ec + iVar2));
    Vector<String>::elementAt((int)(&stack0x000000f4 + iVar2));
    *puVar62 = this;
    NoticeDialog::show(pNVar15,&stack0x000000ec + iVar2,&stack0x000000f4 + iVar2,0);
    String::~String((String *)(&stack0x000000f4 + iVar2));
    String::~String((String *)(&stack0x000000ec + iVar2));
  }
  this[0x450] = (GameStateMap)0x0;
  if (*(int *)(*(int *)(this + 0x44) * 4 + *(int *)(*(int *)(this + 0xc) + 0x698)) < 1) {
    CapcomDate::now((CapcomDate *)(&stack0x000001a0 + iVar2));
    iVar3 = CapcomDate::daysBetween
                      (*(undefined4 *)(*(int *)(this + 0xc) + 0x8a0),
                       *(undefined4 *)(*(int *)(this + 0xc) + 0x8a4),
                       *(undefined4 *)(&stack0x000001a0 + iVar2),
                       *(undefined4 *)(&stack0x000001a4 + iVar2));
    if ((iVar3 != 0) &&
       (iVar3 = CapcomDate::secondsBetween
                          (*(undefined4 *)(*(int *)(this + 0xc) + DAT_0016d4f8),
                           *(undefined4 *)(*(int *)(this + 0xc) + DAT_0016d4f8 + 4),
                           *(undefined4 *)(&stack0x000001a0 + iVar2),
                           *(undefined4 *)(&stack0x000001a4 + iVar2)),
       **(short **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016d4fc) < iVar3)) {
      memcpy((void *)(*(int *)(this + 0xc) + DAT_0016d4f8),&stack0x000001a0 + iVar2,7);
      (**(code **)(*(int *)this + 0x7c))(this);
    }
  }
  ZombieCafe::checkTombstoneDayRecovery();
  CapcomDate::today((CapcomDate *)(&stack0x000000fc + iVar2));
  iVar28 = CapcomDate::daysBetween
                     (*(undefined4 *)(*(int *)(this + 0xc) + DAT_0016d500),
                      *(undefined4 *)(*(int *)(this + 0xc) + DAT_0016d500 + 4),
                      *(undefined4 *)(&stack0x000000fc + iVar2),
                      *(undefined4 *)(&stack0x00000100 + iVar2));
  iVar3 = DAT_0016d504;
  if (0 < iVar28) {
    memcpy((void *)(*(int *)(this + 0xc) + DAT_0016d500),&stack0x000000fc + iVar2,7);
    iVar26 = DAT_0016d50c;
    iVar28 = DAT_0016d508;
    *(undefined4 *)(*(int *)(this + 0xc) + DAT_0016d508) = 0;
    *(undefined4 *)(*(int *)(this + 0xc) + iVar26) = 0;
    *(undefined4 *)(*(int *)(this + 0xc) + iVar3) = 0;
    *(undefined4 *)(*(int *)(this + 0xc) + 0x9d0) = 0;
    iVar24 = *(int *)(this + 0xc);
    if (*(char *)(iVar24 + DAT_0016d510) != '\0') {
      *(int *)(iVar24 + iVar28) =
           *(int *)(iVar24 + iVar28) + **(int **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016d514)
      ;
    }
    iVar28 = *(int *)(this + 0xc);
    if (*(char *)(iVar28 + DAT_0016d518) != '\0') {
      *(int *)(iVar28 + iVar3) =
           *(int *)(iVar28 + iVar3) + **(int **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016d51c);
    }
    iVar3 = *(int *)(this + 0xc);
    if (*(char *)(iVar3 + DAT_0016d520) != '\0') {
      *(int *)(iVar3 + iVar26) =
           *(int *)(iVar3 + iVar26) + **(int **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016d514);
    }
    iVar3 = *(int *)(this + 0xc);
    if (*(char *)(iVar3 + DAT_0016d524) != '\0') {
      *(int *)(iVar3 + 0x9d0) =
           *(int *)(iVar3 + 0x9d0) + **(int **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016d51c);
    }
  }
  if (*(int *)(&stack0x00000470 + iVar2) ==
      **(int **)(*(int *)(&stack0x00000008 + iVar2) + DAT_0016d528)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


