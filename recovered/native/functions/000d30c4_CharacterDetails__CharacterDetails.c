/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d30c4 CharacterDetails::CharacterDetails */

/* CharacterDetails::CharacterDetails(Vector<Character*>*, bool, ConfirmDialog*, NoticeDialog*,
   GameStateCafe*, unsigned char, bool) */

void __thiscall
CharacterDetails::CharacterDetails
          (CharacterDetails *this,Vector *param_1,bool param_2,ConfirmDialog *param_3,
          NoticeDialog *param_4,GameStateCafe *param_5,uchar param_6,bool param_7)

{
  uchar *puVar1;
  CharacterDetails CVar2;
  int iVar3;
  bool bVar4;
  void *__s;
  int iVar5;
  CImage *pCVar6;
  ImageElement *pIVar7;
  ScreenElement *pSVar8;
  ProgressBar *this_00;
  ZCImageButton *pZVar9;
  CharacterPortrait *this_01;
  BitmapTextElement *pBVar10;
  CharacterDetails *pCVar11;
  TrueTypeTextElement *pTVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int *piVar16;
  CharacterDetails *pCVar17;
  int iVar18;
  code *pcVar19;
  int iVar20;
  CapcomLinkedList<ScreenElement*> *this_02;
  undefined4 uVar21;
  undefined4 *puVar22;
  CharacterDetails *pCVar56;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar57;
  undefined4 uStack_4;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  uchar *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  int *piVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  int *piVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  int *piVar44;
  undefined4 *puVar45;
  int *piVar46;
  undefined4 *puVar47;
  int *piVar48;
  undefined4 *puVar49;
  int *piVar50;
  undefined4 *puVar51;
  undefined4 *puVar52;
  int *piVar53;
  undefined4 *puVar54;
  int *piVar55;
  
  iVar3 = DAT_000d34a0;
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar25 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar27 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar28 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar29 = &stack0xffffffec + DAT_000d34a0;
  puVar30 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar31 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  piVar32 = (int *)(&stack0xffffffec + DAT_000d34a0);
  puVar33 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar34 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar35 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  piVar36 = (int *)(&stack0xffffffec + DAT_000d34a0);
  puVar37 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar39 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar40 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar41 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar42 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar43 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  piVar44 = (int *)(&stack0xffffffec + DAT_000d34a0);
  puVar45 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  piVar46 = (int *)(&stack0xffffffec + DAT_000d34a0);
  puVar47 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  piVar48 = (int *)(&stack0xffffffec + DAT_000d34a0);
  puVar49 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  piVar50 = (int *)(&stack0xffffffec + DAT_000d34a0);
  puVar51 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  puVar52 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  piVar53 = (int *)(&stack0xffffffec + DAT_000d34a0);
  puVar54 = (undefined4 *)(&stack0xffffffec + DAT_000d34a0);
  piVar55 = (int *)(&stack0xffffffec + DAT_000d34a0);
  *(ConfirmDialog **)(&stack0x00000018 + DAT_000d34a0) = param_3;
  *(uint *)(&stack0x0000002c + DAT_000d34a0) = (uint)(byte)(&stack0x000003fc)[DAT_000d34a0];
  *(uint *)(&stack0x00000010 + DAT_000d34a0) = (uint)param_2;
  *(uint *)(&stack0x00000030 + DAT_000d34a0) = (uint)(byte)(&stack0x00000400)[DAT_000d34a0];
  *(undefined4 *)(&stack0x0000001c + DAT_000d34a0) =
       *(undefined4 *)(&stack0x000003f4 + DAT_000d34a0);
  *(undefined4 *)(&stack0x00000020 + DAT_000d34a0) =
       *(undefined4 *)(&stack0x000003f8 + DAT_000d34a0);
  *(int *)(&stack0x00000014 + DAT_000d34a0) = DAT_000d34a4 + 0xd30f6;
  *(undefined4 *)(&stack0x000003d8 + DAT_000d34a0) =
       **(undefined4 **)(DAT_000d34a4 + 0xd30f6 + DAT_000d34a8);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d34ac) + 8;
  *(undefined4 *)(this + 0x128) = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 0x130) = __s;
  memset(__s,0,*(int *)(this + 0x128) << 2);
  *(undefined4 *)(this + 300) = 0xffffffff;
  *(undefined4 *)(this + 0x148) = 0;
  *(CharacterDetails **)(this + 0x14c) = this + 0x144;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(CharacterDetails **)(this + 0x160) = this + 0x158;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(CharacterDetails **)(&stack0x00000024 + iVar3) = this + 0x144;
  *(CharacterDetails **)(&stack0x00000028 + iVar3) = this + 0x158;
  iVar5 = CapcomApp::getInstance();
  CVar2 = *(CharacterDetails *)(&stack0x00000010 + iVar3);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(iVar5 + 4);
  uVar13 = *(undefined4 *)(&stack0x00000018 + iVar3);
  uVar15 = *(undefined4 *)(&stack0x0000001c + iVar3);
  *(Vector **)(this + 0x74) = param_1;
  this[0x174] = CVar2;
  *(undefined4 *)(this + 0x7c) = uVar13;
  iVar5 = *(int *)(&stack0x00000014 + iVar3);
  *(undefined4 *)(this + 0x80) = uVar15;
  piVar16 = *(int **)(iVar5 + DAT_000d34b0);
  iVar18 = *piVar16;
  iVar5 = SmDev();
  uVar13 = FontManager::addFont(iVar18,SUB41(*(undefined4 *)(DAT_000d34b4 + iVar5 * 4 + 0xd31a6),0))
  ;
  *(undefined4 *)(this + 0x6c) = uVar13;
  iVar18 = *piVar16;
  iVar5 = SmDev();
  uVar13 = FontManager::addFont(iVar18,SUB41(*(undefined4 *)(DAT_000d34b8 + iVar5 * 4 + 0xd31d8),0))
  ;
  *(undefined4 *)(this + 0x70) = uVar13;
  uVar13 = *(undefined4 *)(&stack0x00000020 + iVar3);
  CVar2 = *(CharacterDetails *)(&stack0x0000002c + iVar3);
  this[0x60] = *(CharacterDetails *)(&stack0x00000030 + iVar3);
  *(undefined4 *)(this + 100) = uVar13;
  this[0x68] = CVar2;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  iVar5 = CapcomApp::getInstance();
  uVar13 = *(undefined4 *)(iVar5 + 0x40);
  iVar5 = CapcomApp::getInstance();
  uVar13 = __mulsf3(uVar13,*(undefined4 *)(iVar5 + 0x50));
  *(undefined4 *)(this + 0x18c) = uVar13;
  iVar5 = CapcomApp::getInstance();
  uVar13 = *(undefined4 *)(iVar5 + 0x44);
  iVar5 = CapcomApp::getInstance();
  uVar13 = __mulsf3(uVar13,*(undefined4 *)(iVar5 + 0x50));
  iVar5 = DAT_000d34bc;
  *(undefined4 *)(this + 400) = uVar13;
  uVar21 = *(undefined4 *)(this + 0x18c);
  *(undefined4 *)(&stack0x00000010 + iVar3) = uVar13;
  uVar13 = __floatsisf(*(undefined4 *)(iVar5 + 0xd3240));
  __mulsf3(uVar13,uVar21);
  uVar13 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0xd3254) = uVar13;
  uVar13 = __floatsisf(*(undefined4 *)(iVar5 + 0xd3258));
  __mulsf3(uVar13,*(undefined4 *)(&stack0x00000010 + iVar3));
  uVar13 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0xd326c) = uVar13;
  uVar13 = __floatsisf(*(undefined4 *)(iVar5 + 0xd3270));
  __mulsf3(uVar13,uVar21);
  uVar13 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0xd3284) = uVar13;
  uVar13 = __floatsisf(*(undefined4 *)(iVar5 + 0xd3288));
  __mulsf3(uVar13,*(undefined4 *)(&stack0x00000010 + iVar3));
  uVar13 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0xd329c) = uVar13;
  iVar18 = DAT_000d34c0;
  uVar13 = __floatsisf(*(undefined4 *)(DAT_000d34c0 + 0xd3272));
  __mulsf3(uVar13,uVar21);
  uVar13 = __fixsfsi();
  *(undefined4 *)(iVar18 + 0xd3286) = uVar13;
  uVar13 = __mulsf3(*(undefined4 *)(iVar18 + 0xd328a),uVar21);
  *(undefined4 *)(iVar18 + 0xd329e) = uVar13;
  uVar13 = __mulsf3(*(undefined4 *)(iVar18 + 0xd32a2),uVar21);
  uVar15 = *(undefined4 *)(&stack0x00000010 + iVar3);
  *(undefined4 *)(iVar18 + 0xd32b6) = uVar13;
  uVar13 = __mulsf3(*(undefined4 *)(iVar18 + 0xd32ba),uVar15);
  *(undefined4 *)(iVar18 + 0xd32ce) = uVar13;
  uVar13 = __floatsisf(*(undefined4 *)(iVar5 + 0xd3210));
  __mulsf3(uVar13,uVar21);
  uVar13 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0xd3224) = uVar13;
  uVar13 = __floatsisf(*(undefined4 *)(iVar5 + 0xd3228));
  __mulsf3(uVar13,*(undefined4 *)(&stack0x00000010 + iVar3));
  uVar13 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0xd323c) = uVar13;
  uVar13 = __floatsisf(*(undefined4 *)(iVar18 + 0xd32d2));
  __mulsf3(uVar13,uVar21);
  uVar13 = __fixsfsi();
  *(undefined4 *)(iVar18 + 0xd32e6) = uVar13;
  iVar5 = DAT_000d34c4;
  uVar13 = __floatsisf(*(undefined4 *)(DAT_000d34c4 + 0xd32dc));
  __mulsf3(uVar13,*(undefined4 *)(&stack0x00000010 + iVar3));
  uVar13 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0xd32f0) = uVar13;
  iVar18 = DAT_000d34cc;
  iVar5 = DAT_000d34c8;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  L_PrintLog((char *)(iVar5 + 0xd32fa),(char *)(iVar18 + 0xd32fc));
  this[0xb0] = (CharacterDetails)0x0;
  this[0xb1] = (CharacterDetails)0x0;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x78) + 0x7f0),2,false)
  ;
  pIVar7 = (ImageElement *)operator_new(0x98);
  uVar13 = __addsf3(*(undefined4 *)(this + 0x18c));
  uVar15 = *(undefined4 *)(this + 400);
  *(undefined4 *)(&stack0x00000010 + iVar3) = uVar13;
  bVar4 = (bool)__addsf3(uVar15);
  *puVar22 = 0x21;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0,extraout_s1,(uchar)*(undefined4 *)(&stack0x00000010 + iVar3),
             bVar4);
  *(ImageElement **)(this + 0x90) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  String::String((String *)(&stack0x00000040 + iVar3),(char *)(DAT_000d34d0 + 0xd3360));
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  uVar13 = *(undefined4 *)(*(int *)(this + 0x78) + 0x4e0);
  puVar14 = *(undefined4 **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d34d4);
  uVar15 = *puVar14;
  *puVar23 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  *(undefined4 **)(&stack0x00000010 + iVar3) = puVar14;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,&stack0x00000040 + iVar3,uVar13,uVar15);
  *(ScreenElement **)(this + 0xa4) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String((String *)(&stack0x00000040 + iVar3));
  *(undefined1 *)(*(int *)(this + 0xa4) + 0x7f) = 0x11;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x78) + DAT_000d34d8),0x2a,false)
  ;
  pIVar7 = (ImageElement *)operator_new(0x98);
  uVar13 = *(undefined4 *)(this + 0x18c);
  *puVar24 = 0x11;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_00,extraout_s1_00,(uchar)uVar13,
             SUB41(*(undefined4 *)(this + 400),0));
  *(ImageElement **)(this + 0x9c) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x78) + DAT_000d34d8),0x53,false)
  ;
  pIVar7 = (ImageElement *)operator_new(0x98);
  *puVar25 = 0x22;
  uVar13 = *(undefined4 *)(this + 0x18c);
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_01,extraout_s1_01,(uchar)uVar13,
             SUB41(*(undefined4 *)(this + 400),0));
  *(ImageElement **)(this + 0xa0) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  L_PrintLog((char *)(DAT_000d34dc + 0xd3430),(char *)(DAT_000d34e0 + 0xd3432));
  String::String((String *)(&stack0x00000048 + iVar3),0);
  iVar18 = *(int *)(this + 0x78);
  iVar5 = SmDev();
  uVar15 = *(undefined4 *)((*(int *)(DAT_000d34e4 + iVar5 * 4 + 0xd3492) + 0x136) * 4 + iVar18);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  uVar13 = **(undefined4 **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d34e8);
  *puVar26 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 10;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,&stack0x00000048 + iVar3,uVar15,uVar13);
  *(ScreenElement **)(this + 0x98) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String((String *)(&stack0x00000048 + iVar3));
  String::String((String *)(&stack0x00000050 + iVar3),0);
  iVar5 = SmDev();
  uVar21 = *(undefined4 *)(iVar5 * 4 + *(int *)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d3894));
  pSVar8 = (ScreenElement *)operator_new(0xe4);
  uVar13 = *(undefined4 *)(this + 0x70);
  uVar15 = **(undefined4 **)(&stack0x00000010 + iVar3);
  *puVar27 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  *(undefined4 *)((int)&param_4 + iVar3) = 0x11;
  *(undefined4 *)((int)&param_5 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar21;
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar8,&stack0x00000050 + iVar3,uVar13,uVar15);
  *(ScreenElement **)(this + 0xf0) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String((String *)(&stack0x00000050 + iVar3));
  piVar16 = *(int **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d3898);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar16,*(TrueTypeTextElement **)(this + 0xf0));
  L_PrintLog((char *)(DAT_000d389c + 0xd354e),(char *)(DAT_000d38a0 + 0xd3550));
  sprintf(&stack0x000002d8 + iVar3,(char *)(DAT_000d38a4 + 0xd355e),*(int *)(*piVar16 + 4) + 1);
  L_PrintLog((char *)(DAT_000d38a8 + 0xd356a),&stack0x000002d8 + iVar3);
  *(undefined1 *)(*(int *)(this + 0xf0) + 0x7f) = 0x11;
  this_00 = (ProgressBar *)operator_new(0x84);
  *puVar28 = 0x87;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0xffffffff;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0xffffffff;
  ProgressBar::ProgressBar
            (this_00,100,100,0x86,*puVar29,*(int *)(&stack0xfffffff0 + iVar3),
             *(int *)(&stack0xfffffff4 + iVar3));
  *(ProgressBar **)(this + 0x110) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  (**(code **)(**(int **)(this + 0x110) + 0x1c))(*(int **)(this + 0x110),0x11);
  String::String((String *)(&stack0x00000058 + iVar3),0);
  iVar18 = *(int *)(this + 0x78);
  iVar5 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(DAT_000d38ac + iVar5 * 4 + 0xd3624) + 0x136) * 4 + iVar18);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  *puVar30 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0x21;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,&stack0x00000058 + iVar3,uVar13,0xffffffff);
  *(ScreenElement **)(this + 0x114) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String((String *)(&stack0x00000058 + iVar3));
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x78) + DAT_000d38b0),0x7f,false)
  ;
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *puVar31 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  ZCImageButton::ZCImageButton
            (pZVar9,'\x11',pCVar6,(CImage *)0x0,*piVar32,*(int *)(&stack0xfffffff0 + iVar3),
             (bool)(&stack0xfffffff4)[iVar3]);
  *(ZCImageButton **)(this + 0x178) = pZVar9;
  uVar57 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar9);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x178),(float)uVar57,(float)((ulonglong)uVar57 >> 0x20));
  (**(code **)(**(int **)(this + 0x178) + 0x20))(*(int **)(this + 0x178),0);
  this_01 = (CharacterPortrait *)operator_new(0xa0);
  CharacterPortrait::CharacterPortrait(this_01,(Character *)0x0,'!');
  *(CharacterPortrait **)(this + 0x124) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  pSVar8 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar8,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x104) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  piVar16 = *(int **)(this + 0x104);
  pcVar19 = *(code **)(*piVar16 + 0x2c);
  pSVar8 = (ScreenElement *)operator_new(0x60);
  *(ScreenElement **)(&stack0x00000010 + iVar3) = pSVar8;
  ScreenElement::ScreenElement(pSVar8,(ScreenElement *)0x0);
  uVar13 = *(undefined4 *)(&stack0x00000010 + iVar3);
  *(undefined4 *)(this + 0x108) = uVar13;
  (*pcVar19)(piVar16,uVar13);
  piVar16 = *(int **)(this + 0x108);
  *(undefined4 *)(&stack0x00000018 + iVar3) = *(undefined4 *)(*piVar16 + 0x2c);
  String::String((String *)(&stack0x00000060 + iVar3),0);
  iVar18 = *(int *)(this + 0x78);
  iVar5 = SmDev();
  *(undefined4 *)(&stack0x0000001c + iVar3) =
       *(undefined4 *)((*(int *)(DAT_000d38b4 + iVar5 * 4 + 0xd372e) + 0x136) * 4 + iVar18);
  iVar5 = SmDev();
  uVar15 = *(undefined4 *)(iVar5 * 4 + *(int *)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d3894));
  *(int *)(&stack0x00000010 + iVar3) = *(int *)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d3894);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  uVar13 = **(undefined4 **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d38b8);
  *(undefined4 **)(&stack0x00000034 + iVar3) =
       *(undefined4 **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d38b8);
  *puVar33 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar15;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  *(undefined4 *)((int)&param_5 + iVar3) = 1;
  puVar1 = &param_6 + iVar3;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(undefined4 *)((int)&param_4 + iVar3) = 9;
  BitmapTextElement::BitmapTextElement
            (pBVar10,&stack0x00000060 + iVar3,*(undefined4 *)(&stack0x0000001c + iVar3),uVar13);
  *(BitmapTextElement **)(this + 0xdc) = pBVar10;
  (**(code **)(&stack0x00000018 + iVar3))(piVar16,pBVar10);
  String::~String((String *)(&stack0x00000060 + iVar3));
  piVar16 = *(int **)(this + 0x108);
  *(undefined4 *)(&stack0x00000018 + iVar3) = *(undefined4 *)(*piVar16 + 0x2c);
  String::String((String *)(&stack0x00000068 + iVar3),0);
  iVar18 = *(int *)(this + 0x78);
  iVar5 = SmDev();
  *(undefined4 *)(&stack0x0000001c + iVar3) =
       *(undefined4 *)((*(int *)(DAT_000d38bc + iVar5 * 4 + 0xd37b2) + 0x136) * 4 + iVar18);
  iVar5 = SmDev();
  uVar15 = *(undefined4 *)(*(int *)(&stack0x00000010 + iVar3) + iVar5 * 4);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  uVar13 = **(undefined4 **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d38c0);
  *puVar34 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  *(undefined4 *)((int)&param_4 + iVar3) = 0x21;
  *(undefined4 *)((int)&param_5 + iVar3) = 1;
  puVar1 = &param_6 + iVar3;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar15;
  BitmapTextElement::BitmapTextElement
            (pBVar10,&stack0x00000068 + iVar3,*(undefined4 *)(&stack0x0000001c + iVar3),uVar13);
  *(BitmapTextElement **)(this + 0xe0) = pBVar10;
  (**(code **)(&stack0x00000018 + iVar3))(piVar16,pBVar10);
  String::~String((String *)(&stack0x00000068 + iVar3));
  *(undefined1 *)(*(int *)(this + 0xe0) + 0x7f) = 0x21;
  *(CharacterDetails **)(&stack0x00000030 + iVar3) = this + 200;
  *(CharacterDetails **)(&stack0x00000038 + iVar3) = this + 0xfc;
  pCVar17 = this + 0xb4;
  do {
    piVar16 = *(int **)(*(int *)(&stack0x00000038 + iVar3) + 0xc);
    *(undefined4 *)(&stack0x00000018 + iVar3) = *(undefined4 *)(*piVar16 + 0x2c);
    uVar13 = PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x78) + DAT_000d38b0),0xdd,false);
    iVar5 = *(int *)(this + 0x78);
    *(undefined4 *)(&stack0x0000001c + iVar3) = uVar13;
    uVar13 = PackedImage::getImage(*(PackedImage **)(iVar5 + DAT_000d38b0),0xde,false);
    *(undefined4 *)(&stack0x00000020 + iVar3) = uVar13;
    pZVar9 = (ZCImageButton *)operator_new(0xa0);
    *puVar35 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
    *(undefined4 *)(&stack0xfffffff4 + iVar3) = 1;
    ZCImageButton::ZCImageButton
              (pZVar9,'\t',*(CImage **)(&stack0x0000001c + iVar3),
               *(CImage **)(&stack0x00000020 + iVar3),*piVar36,*(int *)(&stack0xfffffff0 + iVar3),
               (bool)(&stack0xfffffff4)[iVar3]);
    *(ZCImageButton **)pCVar17 = pZVar9;
    (**(code **)(&stack0x00000018 + iVar3))(piVar16,pZVar9);
    *(undefined4 *)(&stack0x00000018 + iVar3) = *(undefined4 *)(**(int **)pCVar17 + 0x2c);
    String::String((String *)(&stack0x00000070 + iVar3),(char *)(DAT_000d38c4 + 0xd381e));
    iVar18 = *(int *)(this + 0x78);
    iVar5 = SmDev();
    iVar20 = *(int *)pCVar17;
    pCVar56 = pCVar17 + 4;
    *(undefined4 *)(&stack0x0000001c + iVar3) =
         *(undefined4 *)((*(int *)(DAT_000d38c8 + iVar5 * 4 + 0xd3892) + 0x136) * 4 + iVar18);
    uVar13 = *(undefined4 *)(iVar20 + 0xc);
    *(undefined4 *)(&stack0x0000002c + iVar3) = *(undefined4 *)(iVar20 + 0x10);
    *(undefined4 *)(&stack0x00000020 + iVar3) = uVar13;
    pBVar10 = (BitmapTextElement *)operator_new(0xc0);
    uVar15 = *(undefined4 *)(&stack0x0000002c + iVar3);
    uVar13 = *(undefined4 *)(&stack0x00000020 + iVar3);
    *puVar37 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
    *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
    *(undefined4 *)((int)&uStack_4 + iVar3) = uVar15;
    *(undefined4 *)((int)&param_5 + iVar3) = 0;
    puVar1 = &param_6 + iVar3;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar13;
    *(undefined4 *)((int)&param_4 + iVar3) = 9;
    BitmapTextElement::BitmapTextElement
              (pBVar10,&stack0x00000070 + iVar3,*(undefined4 *)(&stack0x0000001c + iVar3),0xffffffff
              );
    *(BitmapTextElement **)(pCVar17 + 0x14) = pBVar10;
    (**(code **)(&stack0x00000018 + iVar3))(iVar20,pBVar10);
    String::~String((String *)(&stack0x00000070 + iVar3));
    pCVar11 = *(CharacterDetails **)(&stack0x00000030 + iVar3);
    *(undefined1 *)(*(int *)(pCVar17 + 0x14) + 0x7f) = 0x12;
    pCVar17 = pCVar56;
  } while (pCVar56 != pCVar11);
  piVar16 = *(int **)(this + 0x108);
  *(undefined4 *)(&stack0x00000018 + iVar3) = *(undefined4 *)(*piVar16 + 0x2c);
  String::String((String *)(&stack0x00000078 + iVar3),0);
  iVar5 = SmDev();
  uVar21 = *(undefined4 *)(*(int *)(&stack0x00000010 + iVar3) + iVar5 * 4);
  pTVar12 = (TrueTypeTextElement *)operator_new(0xe4);
  uVar13 = *(undefined4 *)(this + 0x70);
  uVar15 = **(undefined4 **)(&stack0x00000034 + iVar3);
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *puVar38 = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  *(undefined4 *)((int)&param_4 + iVar3) = 9;
  *(undefined4 *)((int)&param_5 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar21;
  TrueTypeTextElement::TrueTypeTextElement(pTVar12,&stack0x00000078 + iVar3,uVar13,uVar15);
  *(TrueTypeTextElement **)(this + 0xec) = pTVar12;
  (**(code **)(&stack0x00000018 + iVar3))(piVar16,pTVar12);
  String::~String((String *)(&stack0x00000078 + iVar3));
  piVar16 = *(int **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d3cf0);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar16,*(TrueTypeTextElement **)(this + 0xec));
  L_PrintLog((char *)(DAT_000d3cf4 + 0xd3942),(char *)(DAT_000d3cf8 + 0xd3944));
  sprintf(&stack0x000002d8 + iVar3,(char *)(DAT_000d3cfc + 0xd3952),*(int *)(*piVar16 + 4) + 1);
  L_PrintLog((char *)(DAT_000d3d00 + 0xd395e),&stack0x000002d8 + iVar3);
  piVar16 = *(int **)(this + 0x108);
  *(undefined4 *)(&stack0x00000010 + iVar3) = *(undefined4 *)(*piVar16 + 0x2c);
  String::valueOf((int)(&stack0x00000088 + iVar3));
  String::String((String *)(&stack0x00000090 + iVar3),(char *)(DAT_000d3d04 + 0xd397c));
  String::operator+((String *)(&stack0x00000080 + iVar3),&stack0x00000088 + iVar3,
                    &stack0x00000090 + iVar3);
  iVar18 = *(int *)(this + 0x78);
  iVar5 = SmDev();
  uVar15 = *(undefined4 *)((*(int *)(DAT_000d3d08 + iVar5 * 4 + 0xd39f6) + 0x136) * 4 + iVar18);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  uVar13 = **(undefined4 **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d3d0c);
  *puVar39 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  BitmapTextElement::BitmapTextElement(pBVar10,&stack0x00000080 + iVar3,uVar15,uVar13);
  *(BitmapTextElement **)(this + 0xf8) = pBVar10;
  (**(code **)(&stack0x00000010 + iVar3))(piVar16,pBVar10);
  String::~String((String *)(&stack0x00000080 + iVar3));
  String::~String((String *)(&stack0x00000090 + iVar3));
  String::~String((String *)(&stack0x00000088 + iVar3));
  piVar16 = *(int **)(this + 0xf8);
  pcVar19 = *(code **)(*piVar16 + 0x44);
  String::String((String *)(&stack0x00000098 + iVar3),(char *)(DAT_000d3d10 + 0xd39f8));
  (*pcVar19)(piVar16,&stack0x00000098 + iVar3);
  String::~String((String *)(&stack0x00000098 + iVar3));
  piVar16 = *(int **)(this + 0x108);
  *(undefined4 *)(&stack0x00000010 + iVar3) = *(undefined4 *)(*piVar16 + 0x2c);
  Vector<String>::elementAt((int)(&stack0x00000120 + iVar3));
  String::String((String *)(&stack0x00000128 + iVar3),(char *)(DAT_000d3d18 + 0xd3a32));
  String::operator+((String *)(&stack0x00000118 + iVar3),&stack0x00000120 + iVar3,
                    &stack0x00000128 + iVar3);
  Vector<String>::elementAt((int)(&stack0x00000130 + iVar3));
  String::operator+((String *)(&stack0x00000110 + iVar3),&stack0x00000118 + iVar3,
                    &stack0x00000130 + iVar3);
  String::String((String *)(&stack0x00000138 + iVar3),(char *)(DAT_000d3d20 + 0xd3a62));
  String::operator+((String *)(&stack0x00000108 + iVar3),&stack0x00000110 + iVar3,
                    &stack0x00000138 + iVar3);
  Vector<String>::elementAt((int)(&stack0x00000140 + iVar3));
  String::operator+((String *)(&stack0x00000100 + iVar3),&stack0x00000108 + iVar3,
                    &stack0x00000140 + iVar3);
  String::String((String *)(&stack0x00000148 + iVar3),(char *)(DAT_000d3d28 + 0xd3a92));
  String::operator+((String *)(&stack0x000000f8 + iVar3),&stack0x00000100 + iVar3,
                    &stack0x00000148 + iVar3);
  Vector<String>::elementAt((int)(&stack0x00000150 + iVar3));
  String::operator+((String *)(&stack0x000000f0 + iVar3),&stack0x000000f8 + iVar3,
                    &stack0x00000150 + iVar3);
  String::String((String *)(&stack0x00000158 + iVar3),(char *)(DAT_000d3d30 + 0xd3ac2));
  String::operator+((String *)(&stack0x000000e8 + iVar3),&stack0x000000f0 + iVar3,
                    &stack0x00000158 + iVar3);
  Vector<String>::elementAt((int)(&stack0x00000160 + iVar3));
  String::operator+((String *)(&stack0x000000e0 + iVar3),&stack0x000000e8 + iVar3,
                    &stack0x00000160 + iVar3);
  String::String((String *)(&stack0x00000168 + iVar3),(char *)(DAT_000d3d38 + 0xd3af2));
  String::operator+((String *)(&stack0x000000d8 + iVar3),&stack0x000000e0 + iVar3,
                    &stack0x00000168 + iVar3);
  Vector<String>::elementAt((int)(&stack0x00000170 + iVar3));
  String::operator+((String *)(&stack0x000000d0 + iVar3),&stack0x000000d8 + iVar3,
                    &stack0x00000170 + iVar3);
  String::String((String *)(&stack0x00000178 + iVar3),(char *)(DAT_000d3d40 + 0xd3b22));
  String::operator+((String *)(&stack0x000000c8 + iVar3),&stack0x000000d0 + iVar3,
                    &stack0x00000178 + iVar3);
  Vector<String>::elementAt((int)(&stack0x00000180 + iVar3));
  String::operator+((String *)(&stack0x000000c0 + iVar3),&stack0x000000c8 + iVar3,
                    &stack0x00000180 + iVar3);
  String::String((String *)(&stack0x00000188 + iVar3),(char *)(DAT_000d3d48 + 0xd3b52));
  String::operator+((String *)(&stack0x000000b8 + iVar3),&stack0x000000c0 + iVar3,
                    &stack0x00000188 + iVar3);
  Vector<String>::elementAt((int)(&stack0x00000190 + iVar3));
  String::operator+((String *)(&stack0x000000b0 + iVar3),&stack0x000000b8 + iVar3,
                    &stack0x00000190 + iVar3);
  String::String((String *)(&stack0x00000198 + iVar3),(char *)(DAT_000d3d50 + 0xd3b82));
  String::operator+((String *)(&stack0x000000a8 + iVar3),&stack0x000000b0 + iVar3,
                    &stack0x00000198 + iVar3);
  Vector<String>::elementAt((int)(&stack0x000001a0 + iVar3));
  String::operator+((String *)(&stack0x000000a0 + iVar3),&stack0x000000a8 + iVar3,
                    &stack0x000001a0 + iVar3);
  iVar18 = *(int *)(this + 0x78);
  iVar5 = SmDev();
  uVar15 = *(undefined4 *)((*(int *)(DAT_000d3d58 + iVar5 * 4 + 0xd3c18) + 0x136) * 4 + iVar18);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  uVar13 = **(undefined4 **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d3d0c);
  *puVar40 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  BitmapTextElement::BitmapTextElement(pBVar10,&stack0x000000a0 + iVar3,uVar15,uVar13);
  *(BitmapTextElement **)(this + 0xf4) = pBVar10;
  (**(code **)(&stack0x00000010 + iVar3))(piVar16,pBVar10);
  String::~String((String *)(&stack0x000000a0 + iVar3));
  String::~String((String *)(&stack0x000001a0 + iVar3));
  String::~String((String *)(&stack0x000000a8 + iVar3));
  String::~String((String *)(&stack0x00000198 + iVar3));
  String::~String((String *)(&stack0x000000b0 + iVar3));
  String::~String((String *)(&stack0x00000190 + iVar3));
  String::~String((String *)(&stack0x000000b8 + iVar3));
  String::~String((String *)(&stack0x00000188 + iVar3));
  String::~String((String *)(&stack0x000000c0 + iVar3));
  String::~String((String *)(&stack0x00000180 + iVar3));
  String::~String((String *)(&stack0x000000c8 + iVar3));
  String::~String((String *)(&stack0x00000178 + iVar3));
  String::~String((String *)(&stack0x000000d0 + iVar3));
  String::~String((String *)(&stack0x00000170 + iVar3));
  String::~String((String *)(&stack0x000000d8 + iVar3));
  String::~String((String *)(&stack0x00000168 + iVar3));
  String::~String((String *)(&stack0x000000e0 + iVar3));
  String::~String((String *)(&stack0x00000160 + iVar3));
  String::~String((String *)(&stack0x000000e8 + iVar3));
  String::~String((String *)(&stack0x00000158 + iVar3));
  String::~String((String *)(&stack0x000000f0 + iVar3));
  String::~String((String *)(&stack0x00000150 + iVar3));
  String::~String((String *)(&stack0x000000f8 + iVar3));
  String::~String((String *)(&stack0x00000148 + iVar3));
  String::~String((String *)(&stack0x00000100 + iVar3));
  String::~String((String *)(&stack0x00000140 + iVar3));
  String::~String((String *)(&stack0x00000108 + iVar3));
  String::~String((String *)(&stack0x00000138 + iVar3));
  String::~String((String *)(&stack0x00000110 + iVar3));
  String::~String((String *)(&stack0x00000130 + iVar3));
  String::~String((String *)(&stack0x00000118 + iVar3));
  String::~String((String *)(&stack0x00000128 + iVar3));
  String::~String((String *)(&stack0x00000120 + iVar3));
  piVar16 = *(int **)(this + 0x108);
  *(undefined4 *)(&stack0x00000010 + iVar3) = *(undefined4 *)(*piVar16 + 0x2c);
  String::valueOf((int)(&stack0x000001b0 + iVar3));
  String::String((String *)(&stack0x000001b8 + iVar3),(char *)(DAT_000d3d5c + 0xd3cda));
  String::operator+((String *)(&stack0x000001a8 + iVar3),&stack0x000001b0 + iVar3,
                    &stack0x000001b8 + iVar3);
  iVar18 = *(int *)(this + 0x78);
  iVar5 = SmDev();
  uVar15 = *(undefined4 *)((*(int *)(DAT_000d4134 + iVar5 * 4 + 0xd3dc8) + 0x136) * 4 + iVar18);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  uVar13 = **(undefined4 **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d4138);
  *puVar41 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0x21;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  BitmapTextElement::BitmapTextElement(pBVar10,&stack0x000001a8 + iVar3,uVar15,uVar13);
  *(BitmapTextElement **)(this + 0x100) = pBVar10;
  (**(code **)(&stack0x00000010 + iVar3))(piVar16,pBVar10);
  String::~String((String *)(&stack0x000001a8 + iVar3));
  String::~String((String *)(&stack0x000001b8 + iVar3));
  String::~String((String *)(&stack0x000001b0 + iVar3));
  piVar16 = *(int **)(this + 0x100);
  pcVar19 = *(code **)(*piVar16 + 0x44);
  String::String((String *)(&stack0x000001c0 + iVar3),(char *)(DAT_000d413c + 0xd3dcc));
  (*pcVar19)(piVar16,&stack0x000001c0 + iVar3);
  String::~String((String *)(&stack0x000001c0 + iVar3));
  piVar16 = *(int **)(this + 0x108);
  *(undefined4 *)(&stack0x00000010 + iVar3) = *(undefined4 *)(*piVar16 + 0x2c);
  String::valueOf((int)(&stack0x00000248 + iVar3));
  String::String((String *)(&stack0x00000250 + iVar3),(char *)(DAT_000d4140 + 0xd3df8));
  String::operator+((String *)(&stack0x00000240 + iVar3),&stack0x00000248 + iVar3,
                    &stack0x00000250 + iVar3);
  String::valueOf((int)(&stack0x00000258 + iVar3));
  String::operator+((String *)(&stack0x00000238 + iVar3),&stack0x00000240 + iVar3,
                    &stack0x00000258 + iVar3);
  String::String((String *)(&stack0x00000260 + iVar3),(char *)(DAT_000d4144 + 0xd3e1e));
  String::operator+((String *)(&stack0x00000230 + iVar3),&stack0x00000238 + iVar3,
                    &stack0x00000260 + iVar3);
  String::valueOf((int)(&stack0x00000268 + iVar3));
  String::operator+((String *)(&stack0x00000228 + iVar3),&stack0x00000230 + iVar3,
                    &stack0x00000268 + iVar3);
  String::String((String *)(&stack0x00000270 + iVar3),(char *)(DAT_000d4148 + 0xd3e44));
  String::operator+((String *)(&stack0x00000220 + iVar3),&stack0x00000228 + iVar3,
                    &stack0x00000270 + iVar3);
  String::valueOf((int)(&stack0x00000278 + iVar3));
  String::operator+((String *)(&stack0x00000218 + iVar3),&stack0x00000220 + iVar3,
                    &stack0x00000278 + iVar3);
  String::String((String *)(&stack0x00000280 + iVar3),(char *)(DAT_000d414c + 0xd3e6a));
  String::operator+((String *)(&stack0x00000210 + iVar3),&stack0x00000218 + iVar3,
                    &stack0x00000280 + iVar3);
  String::valueOf((int)(&stack0x00000288 + iVar3));
  String::operator+((String *)(&stack0x00000208 + iVar3),&stack0x00000210 + iVar3,
                    &stack0x00000288 + iVar3);
  String::String((String *)(&stack0x00000290 + iVar3),(char *)(DAT_000d4150 + 0xd3e90));
  String::operator+((String *)(&stack0x00000200 + iVar3),&stack0x00000208 + iVar3,
                    &stack0x00000290 + iVar3);
  String::valueOf((int)(&stack0x00000298 + iVar3));
  String::operator+((String *)(&stack0x000001f8 + iVar3),&stack0x00000200 + iVar3,
                    &stack0x00000298 + iVar3);
  String::String((String *)(&stack0x000002a0 + iVar3),(char *)(DAT_000d4154 + 0xd3eb6));
  String::operator+((String *)(&stack0x000001f0 + iVar3),&stack0x000001f8 + iVar3,
                    &stack0x000002a0 + iVar3);
  String::valueOf((int)(&stack0x000002a8 + iVar3));
  String::operator+((String *)(&stack0x000001e8 + iVar3),&stack0x000001f0 + iVar3,
                    &stack0x000002a8 + iVar3);
  String::String((String *)(&stack0x000002b0 + iVar3),(char *)(DAT_000d4158 + 0xd3edc));
  String::operator+((String *)(&stack0x000001e0 + iVar3),&stack0x000001e8 + iVar3,
                    &stack0x000002b0 + iVar3);
  String::valueOf((int)(&stack0x000002b8 + iVar3));
  String::operator+((String *)(&stack0x000001d8 + iVar3),&stack0x000001e0 + iVar3,
                    &stack0x000002b8 + iVar3);
  String::String((String *)(&stack0x000002c0 + iVar3),(char *)(DAT_000d415c + 0xd3f02));
  String::operator+((String *)(&stack0x000001d0 + iVar3),&stack0x000001d8 + iVar3,
                    &stack0x000002c0 + iVar3);
  String::valueOf((int)(&stack0x000002c8 + iVar3));
  String::operator+((String *)(&stack0x000001c8 + iVar3),&stack0x000001d0 + iVar3,
                    &stack0x000002c8 + iVar3);
  iVar18 = *(int *)(this + 0x78);
  iVar5 = SmDev();
  uVar15 = *(undefined4 *)((*(int *)(DAT_000d4160 + iVar5 * 4 + 0xd3f8e) + 0x136) * 4 + iVar18);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  uVar13 = **(undefined4 **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d4138);
  *puVar42 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0x21;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
  BitmapTextElement::BitmapTextElement(pBVar10,&stack0x000001c8 + iVar3,uVar15,uVar13);
  *(BitmapTextElement **)(this + 0xfc) = pBVar10;
  (**(code **)(&stack0x00000010 + iVar3))(piVar16,pBVar10);
  String::~String((String *)(&stack0x000001c8 + iVar3));
  String::~String((String *)(&stack0x000002c8 + iVar3));
  String::~String((String *)(&stack0x000001d0 + iVar3));
  String::~String((String *)(&stack0x000002c0 + iVar3));
  String::~String((String *)(&stack0x000001d8 + iVar3));
  String::~String((String *)(&stack0x000002b8 + iVar3));
  String::~String((String *)(&stack0x000001e0 + iVar3));
  String::~String((String *)(&stack0x000002b0 + iVar3));
  String::~String((String *)(&stack0x000001e8 + iVar3));
  String::~String((String *)(&stack0x000002a8 + iVar3));
  String::~String((String *)(&stack0x000001f0 + iVar3));
  String::~String((String *)(&stack0x000002a0 + iVar3));
  String::~String((String *)(&stack0x000001f8 + iVar3));
  String::~String((String *)(&stack0x00000298 + iVar3));
  String::~String((String *)(&stack0x00000200 + iVar3));
  String::~String((String *)(&stack0x00000290 + iVar3));
  String::~String((String *)(&stack0x00000208 + iVar3));
  String::~String((String *)(&stack0x00000288 + iVar3));
  String::~String((String *)(&stack0x00000210 + iVar3));
  String::~String((String *)(&stack0x00000280 + iVar3));
  String::~String((String *)(&stack0x00000218 + iVar3));
  String::~String((String *)(&stack0x00000278 + iVar3));
  String::~String((String *)(&stack0x00000220 + iVar3));
  String::~String((String *)(&stack0x00000270 + iVar3));
  String::~String((String *)(&stack0x00000228 + iVar3));
  String::~String((String *)(&stack0x00000268 + iVar3));
  String::~String((String *)(&stack0x00000230 + iVar3));
  String::~String((String *)(&stack0x00000260 + iVar3));
  String::~String((String *)(&stack0x00000238 + iVar3));
  String::~String((String *)(&stack0x00000258 + iVar3));
  String::~String((String *)(&stack0x00000240 + iVar3));
  String::~String((String *)(&stack0x00000250 + iVar3));
  String::~String((String *)(&stack0x00000248 + iVar3));
  L_PrintLog((char *)(DAT_000d4164 + 0xd403e),(char *)(DAT_000d4168 + 0xd4040));
  L_PrintLog((char *)(DAT_000d416c + 0xd404a),(char *)(DAT_000d4170 + 0xd404c));
  L_PrintLog((char *)(DAT_000d4174 + 0xd4056),(char *)(DAT_000d4178 + 0xd4058));
  this[0x188] = (CharacterDetails)0x0;
  this[DAT_000d417c] = (CharacterDetails)0x0;
  *(undefined1 *)(*(int *)(this + 0xfc) + 0x7f) = 0x21;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x78) + DAT_000d4180),6,false);
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *puVar43 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  uVar57 = ZCImageButton::ZCImageButton
                     (pZVar9,'!',pCVar6,(CImage *)0x0,*piVar44,*(int *)(&stack0xfffffff0 + iVar3),
                      (bool)(&stack0xfffffff4)[iVar3]);
  ImageButton::setScale((ImageButton *)pZVar9,(float)uVar57,(float)((ulonglong)uVar57 >> 0x20));
  pCVar6 = *(CImage **)(pZVar9 + 0x60);
  *(CapcomLinkedList<CImage*> **)(&stack0x00000010 + iVar3) =
       (CapcomLinkedList<CImage*> *)(this + 0x158);
  CapcomLinkedList<CImage*>::add((CapcomLinkedList<CImage*> *)(this + 0x158),pCVar6);
  (**(code **)(*(int *)pZVar9 + 0x14))
            (pZVar9,(int)*(short *)(this + 0x140),
             **(undefined4 **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d4184));
  this_02 = (CapcomLinkedList<ScreenElement*> *)(this + 0x144);
  CapcomLinkedList<ScreenElement*>::add(this_02,(ScreenElement *)pZVar9);
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar9);
  puVar14 = (undefined4 *)operator_new(0xc);
  iVar18 = DAT_000d4188;
  iVar20 = *(int *)(&stack0x00000014 + iVar3);
  *puVar14 = pZVar9;
  iVar5 = DAT_000d4180;
  uVar13 = *(undefined4 *)(iVar20 + iVar18);
  puVar14[2] = this;
  puVar14[1] = uVar13;
  *(undefined4 **)(this + 0x134) = puVar14;
  uVar13 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x78) + iVar5),1,false);
  *(undefined4 *)(&stack0x00000018 + iVar3) = uVar13;
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  pCVar6 = *(CImage **)(&stack0x00000018 + iVar3);
  *puVar45 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  uVar57 = ZCImageButton::ZCImageButton
                     (pZVar9,'\n',pCVar6,(CImage *)0x0,*piVar46,*(int *)(&stack0xfffffff0 + iVar3),
                      (bool)(&stack0xfffffff4)[iVar3]);
  ImageButton::setScale((ImageButton *)pZVar9,(float)uVar57,(float)((ulonglong)uVar57 >> 0x20));
  puVar14 = (undefined4 *)operator_new(0xc);
  iVar5 = DAT_000d4520;
  iVar18 = *(int *)(&stack0x00000014 + iVar3);
  *puVar14 = pZVar9;
  uVar13 = *(undefined4 *)(iVar18 + iVar5);
  puVar14[2] = this;
  puVar14[1] = uVar13;
  *(undefined4 **)(this + 0x138) = puVar14;
  CapcomLinkedList<CImage*>::add
            (*(CapcomLinkedList<CImage*> **)(&stack0x00000010 + iVar3),*(CImage **)(pZVar9 + 0x60));
  CapcomLinkedList<ScreenElement*>::add(this_02,(ScreenElement *)pZVar9);
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar9);
  uVar13 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x78) + DAT_000d4524),2,false);
  *(undefined4 *)(&stack0x00000018 + iVar3) = uVar13;
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  pCVar6 = *(CImage **)(&stack0x00000018 + iVar3);
  *puVar47 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  uVar57 = ZCImageButton::ZCImageButton
                     (pZVar9,'\"',pCVar6,(CImage *)0x0,*piVar48,*(int *)(&stack0xfffffff0 + iVar3),
                      (bool)(&stack0xfffffff4)[iVar3]);
  ImageButton::setScale((ImageButton *)pZVar9,(float)uVar57,(float)((ulonglong)uVar57 >> 0x20));
  puVar14 = (undefined4 *)operator_new(0xc);
  iVar5 = DAT_000d4528;
  iVar18 = *(int *)(&stack0x00000014 + iVar3);
  *puVar14 = pZVar9;
  uVar13 = *(undefined4 *)(iVar18 + iVar5);
  puVar14[2] = this;
  puVar14[1] = uVar13;
  *(undefined4 **)(this + 0x13c) = puVar14;
  CapcomLinkedList<CImage*>::add
            (*(CapcomLinkedList<CImage*> **)(&stack0x00000010 + iVar3),*(CImage **)(pZVar9 + 0x60));
  CapcomLinkedList<ScreenElement*>::add(this_02,(ScreenElement *)pZVar9);
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar9);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x78) + DAT_000d4524),10,false);
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 1;
  *puVar49 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  ZCImageButton::ZCImageButton
            (pZVar9,'\x14',pCVar6,(CImage *)0x0,*piVar50,*(int *)(&stack0xfffffff0 + iVar3),
             (bool)(&stack0xfffffff4)[iVar3]);
  *(ZCImageButton **)(this + 0x16c) = pZVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar9);
  *(undefined4 *)(&stack0x00000010 + iVar3) = *(undefined4 *)(**(int **)(this + 0x16c) + 0x2c);
  String::String((String *)(&stack0x000002d0 + iVar3),0);
  iVar18 = *(int *)(this + 0x78);
  iVar5 = SmDev();
  *(undefined4 *)(&stack0x00000018 + iVar3) =
       *(undefined4 *)((*(int *)(DAT_000d452c + iVar5 * 4 + 0xd42ee) + 0x136) * 4 + iVar18);
  iVar5 = *(int *)(this + 0x16c);
  uVar13 = *(undefined4 *)(iVar5 + 0xc);
  *(undefined4 *)(&stack0x00000020 + iVar3) = *(undefined4 *)(iVar5 + 0x10);
  *(undefined4 *)(&stack0x0000001c + iVar3) = uVar13;
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  uVar13 = *(undefined4 *)(&stack0x0000001c + iVar3);
  *puVar51 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  uVar13 = __floatsisf(uVar13);
  __mulsf3(uVar13,DAT_000d4530);
  uVar13 = __fixsfsi();
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar13;
  uVar13 = __floatsisf(*(undefined4 *)(&stack0x00000020 + iVar3));
  __mulsf3(uVar13,0x3fc00000);
  uVar13 = __fixsfsi();
  *(undefined4 *)((int)&param_4 + iVar3) = 0x12;
  *(undefined4 *)((int)&uStack_4 + iVar3) = uVar13;
  uVar13 = *(undefined4 *)(&stack0x00000018 + iVar3);
  *(undefined4 *)((int)&param_5 + iVar3) = 0;
  puVar1 = &param_6 + iVar3;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  BitmapTextElement::BitmapTextElement(pBVar10,&stack0x000002d0 + iVar3,uVar13,0xffffffff);
  *(BitmapTextElement **)(this + 0x170) = pBVar10;
  (**(code **)(&stack0x00000010 + iVar3))(iVar5,pBVar10);
  String::~String((String *)(&stack0x000002d0 + iVar3));
  iVar5 = DAT_000d4524;
  *(undefined1 *)(*(int *)(this + 0x170) + 0x7f) = 0x12;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x78) + iVar5),0xdf,false);
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *puVar52 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  ZCImageButton::ZCImageButton
            (pZVar9,'\x14',pCVar6,(CImage *)0x0,*piVar53,*(int *)(&stack0xfffffff0 + iVar3),
             (bool)(&stack0xfffffff4)[iVar3]);
  *(ZCImageButton **)(this + 0x17c) = pZVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar9);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x78) + iVar5),0x11c,false);
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  *puVar54 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  ZCImageButton::ZCImageButton
            (pZVar9,'\x14',pCVar6,(CImage *)0x0,*piVar55,*(int *)(&stack0xfffffff0 + iVar3),
             (bool)(&stack0xfffffff4)[iVar3]);
  *(ZCImageButton **)(this + 0x180) = pZVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar9);
  *(undefined4 *)(&stack0x00000010 + iVar3) = *(undefined4 *)(this + 0x180);
  iVar5 = SmDev();
  uVar15 = *(undefined4 *)(DAT_000d4534 + iVar5 * 4 + 0xd43c4);
  uVar21 = *(undefined4 *)(this + 400);
  uVar13 = SmDev();
  *(undefined4 *)(&stack0x00000018 + iVar3) = uVar13;
  __mulsf3(uVar15,uVar21);
  uVar57 = __mulsf3(*(undefined4 *)(DAT_000d4538 + *(int *)(&stack0x00000018 + iVar3) * 4 + 0xd43e4)
                    ,*(undefined4 *)(this + 400));
  ImageButton::setScale
            (*(ImageButton **)(&stack0x00000010 + iVar3),(float)uVar57,
             (float)((ulonglong)uVar57 >> 0x20));
  (**(code **)(**(int **)(this + 0x180) + 0x20))(*(int **)(this + 0x180),0);
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  *(undefined4 *)(this + 0x11c) = 0xffffffff;
  layout(this);
  L_PrintLog((char *)(DAT_000d453c + 0xd43d0),(char *)(DAT_000d4540 + 0xd43d2));
  if (*(int *)(&stack0x000003d8 + iVar3) ==
      **(int **)(*(int *)(&stack0x00000014 + iVar3) + DAT_000d4544)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


