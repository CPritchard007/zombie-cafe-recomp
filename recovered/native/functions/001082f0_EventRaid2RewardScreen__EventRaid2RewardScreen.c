/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001082f0 EventRaid2RewardScreen::EventRaid2RewardScreen */

/* EventRaid2RewardScreen::EventRaid2RewardScreen(int, int, int, float, long, long, int, int, int,
   float) */

void __thiscall
EventRaid2RewardScreen::EventRaid2RewardScreen
          (EventRaid2RewardScreen *this,int param_1,int param_2,int param_3,float param_4,
          long param_5,long param_6,int param_7,int param_8,int param_9,float param_10)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  CImage *pCVar4;
  ImageElement *this_00;
  ScreenElement *pSVar5;
  TrueTypeTextElement *pTVar6;
  ZCImageButton *this_01;
  BitmapTextElement *pBVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  code *pcVar11;
  int *piVar12;
  undefined4 *puVar13;
  float extraout_s0;
  float fVar25;
  float extraout_s1;
  undefined4 uStack_4;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined4 *puVar24;
  
  iVar1 = DAT_001086b8;
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_001086b8);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_001086b8);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_001086b8);
  piVar16 = (int *)(&stack0xffffffec + DAT_001086b8);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_001086b8);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_001086b8);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_001086b8);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_001086b8);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_001086b8);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_001086b8);
  piVar23 = (int *)(&stack0xffffffec + DAT_001086b8);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_001086b8);
  *(int *)(&stack0x00000020 + DAT_001086b8) = param_1;
  *(int *)(&stack0x00000028 + DAT_001086b8) = param_3;
  *(int *)((int)&param_8 + DAT_001086b8) = DAT_001086bc + 0x108304;
  *(int *)(&stack0x00000024 + DAT_001086b8) = param_2;
  *(undefined4 *)(&stack0x000002a8 + DAT_001086b8) =
       **(undefined4 **)(DAT_001086bc + 0x108304 + DAT_001086c0);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(*(int *)((int)&param_8 + iVar1) + DAT_001086c4) + 8;
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(&stack0x00000018 + iVar1) = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)((int)&param_9 + iVar1) = *(undefined4 *)(iVar2 + 0x44);
  iVar2 = CapcomApp::getInstance();
  iVar8 = *(int *)((int)&param_8 + iVar1);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(iVar2 + 4);
  uVar3 = FontManager::addFont(**(int **)(iVar8 + DAT_001086c8),true);
  *(undefined4 *)(this + 0x74) = uVar3;
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + 0x7f0),2,false)
  ;
  this_00 = (ImageElement *)operator_new(0x98);
  *puVar13 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  ImageElement::ImageElement
            (this_00,pCVar4,extraout_s0,extraout_s1,(uchar)DAT_001086cc,(bool)(uchar)DAT_001086cc);
  *(ImageElement **)(this + 0x6c) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x6c) + 0xc),
             *(int *)(*(int *)(this + 0x6c) + 0x10));
  String::String((String *)(&stack0x0000002c + iVar1),(char *)(DAT_001086d0 + 0x108390));
  pSVar5 = (ScreenElement *)operator_new(0xe4);
  *puVar14 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar5,&stack0x0000002c + iVar1,*(undefined4 *)(this + 0x74),
             0xffffffff);
  *(ScreenElement **)(this + 0x84) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String((String *)(&stack0x0000002c + iVar1));
  piVar10 = *(int **)(*(int *)((int)&param_8 + iVar1) + DAT_001086d4);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x84));
  L_PrintLog((char *)(DAT_001086d8 + 0x1083e2),(char *)(DAT_001086dc + 0x1083e4));
  sprintf(&stack0x000001a8 + iVar1,(char *)(DAT_001086e0 + 0x1083f2),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_001086e4 + 0x1083fe),&stack0x000001a8 + iVar1);
  pSVar5 = (ScreenElement *)operator_new(0x60);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0x11;
  *puVar15 = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  ScreenElement::ScreenElement
            (pSVar5,0,0,0,*piVar16,(&stack0xfffffff0)[iVar1],
             *(ScreenElement **)(&stack0xfffffff4 + iVar1));
  *(ScreenElement **)(this + 0x70) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  piVar12 = *(int **)(this + 0x84);
  *(undefined4 *)(&stack0x0000001c + iVar1) = *(undefined4 *)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar2 * 4 + DAT_001086e8 + 0x108446));
  __mulsf3(uVar3,*(undefined4 *)((int)&param_9 + iVar1));
  uVar3 = __fixsfsi();
  (**(code **)(&stack0x0000001c + iVar1))(piVar12,iVar8 / 2,uVar3);
  piVar12 = *(int **)(this + 0x6c);
  *(undefined4 *)(&stack0x0000001c + iVar1) = *(undefined4 *)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x00000034 + iVar1),(char *)(DAT_001086ec + 0x10846a));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar17 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  *(undefined4 *)((int)&param_6 + iVar1) = 0;
  *(undefined4 *)((int)&param_5 + iVar1) = 9;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x00000034 + iVar1,*(undefined4 *)(this + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x88) = pTVar6;
  (**(code **)(&stack0x0000001c + iVar1))(piVar12,pTVar6);
  String::~String((String *)(&stack0x00000034 + iVar1));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x88));
  L_PrintLog((char *)(DAT_001086f0 + 0x1084c0),(char *)(DAT_001086f4 + 0x1084c2));
  sprintf(&stack0x000001a8 + iVar1,(char *)(DAT_001086f8 + 0x1084d0),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_001086fc + 0x1084dc),&stack0x000001a8 + iVar1);
  piVar12 = *(int **)(this + 0x88);
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_00108700 + iVar2 * 4 + 0x10850c));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000018 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,uVar3,1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x0000011c + iVar1));
  String::String((String *)(&stack0x0000003c + iVar1),(char *)(DAT_00108704 + 0x10851c));
  StringBuffer::append(&stack0x0000011c + iVar1,&stack0x0000003c + iVar1);
  String::~String((String *)(&stack0x0000003c + iVar1));
  String::valueOf((int)(&stack0x00000044 + iVar1));
  StringBuffer::append(&stack0x0000011c + iVar1,&stack0x00000044 + iVar1);
  String::~String((String *)(&stack0x00000044 + iVar1));
  String::String((String *)(&stack0x0000004c + iVar1),(char *)(DAT_00108708 + 0x10854a));
  StringBuffer::append(&stack0x0000011c + iVar1,&stack0x0000004c + iVar1);
  String::~String((String *)(&stack0x0000004c + iVar1));
  String::valueOf((int)(&stack0x00000054 + iVar1));
  StringBuffer::append(&stack0x0000011c + iVar1,&stack0x00000054 + iVar1);
  String::~String((String *)(&stack0x00000054 + iVar1));
  piVar12 = *(int **)(this + 0x88);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar11)(piVar12,&stack0x0000005c + iVar1);
  String::~String((String *)(&stack0x0000005c + iVar1));
  piVar12 = *(int **)(this + 0x88);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_0010870c + iVar2 * 4 + 0x1085e0));
  __mulsf3(uVar3,*(undefined4 *)((int)&param_9 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,(int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,uVar3);
  piVar12 = *(int **)(this + 0x6c);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x00000064 + iVar1),(char *)(DAT_00108710 + 0x1085d4));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar18 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  *(undefined4 *)((int)&param_6 + iVar1) = 0;
  *(undefined4 *)((int)&param_5 + iVar1) = 9;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x00000064 + iVar1,*(undefined4 *)(this + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x8c) = pTVar6;
  (*pcVar11)(piVar12,pTVar6);
  String::~String((String *)(&stack0x00000064 + iVar1));
  piVar10 = *(int **)(*(int *)((int)&param_8 + iVar1) + DAT_001086d4);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x8c));
  L_PrintLog((char *)(DAT_00108714 + 0x10862c),(char *)(DAT_00108718 + 0x10862e));
  sprintf(&stack0x000001a8 + iVar1,(char *)(DAT_0010871c + 0x10863c),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_00108720 + 0x108648),&stack0x000001a8 + iVar1);
  piVar12 = *(int **)(this + 0x8c);
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_00108724 + iVar2 * 4 + 0x108678));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000018 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,uVar3,1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000138 + iVar1));
  String::String((String *)(&stack0x0000006c + iVar1),(char *)(DAT_00108728 + 0x108688));
  StringBuffer::append(&stack0x00000138 + iVar1,&stack0x0000006c + iVar1);
  String::~String((String *)(&stack0x0000006c + iVar1));
  String::valueOf((int)(&stack0x00000074 + iVar1));
  StringBuffer::append(&stack0x00000138 + iVar1,&stack0x00000074 + iVar1);
  String::~String((String *)(&stack0x00000074 + iVar1));
  iVar2 = __aeabi_fcmpgt(*(undefined4 *)(&stack0x000002c4 + iVar1),0x3f800000);
  if (iVar2 != 0) {
    String::String((String *)(&stack0x0000007c + iVar1),(char *)(DAT_00108b00 + 0x10873c));
    StringBuffer::append(&stack0x00000138 + iVar1,&stack0x0000007c + iVar1);
    fVar25 = (float)String::~String((String *)(&stack0x0000007c + iVar1));
    String::valueOf((String *)(&stack0x00000084 + iVar1),fVar25);
    StringBuffer::append(&stack0x00000138 + iVar1,&stack0x00000084 + iVar1);
    String::~String((String *)(&stack0x00000084 + iVar1));
  }
  piVar12 = *(int **)(this + 0x8c);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar11)(piVar12,&stack0x0000008c + iVar1);
  String::~String((String *)(&stack0x0000008c + iVar1));
  piVar12 = *(int **)(this + 0x8c);
  *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_00108b04 + iVar2 * 4 + 0x1087ec));
  __mulsf3(uVar3,*(undefined4 *)((int)&param_9 + iVar1));
  uVar3 = __fixsfsi();
  (**(code **)(&stack0x00000014 + iVar1))
            (piVar12,(int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,uVar3);
  piVar12 = *(int **)(this + 0x6c);
  *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x00000094 + iVar1),(char *)(DAT_00108b08 + 0x1087ca));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar19 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  *(undefined4 *)((int)&param_6 + iVar1) = 0;
  *(undefined4 *)((int)&param_5 + iVar1) = 9;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x00000094 + iVar1,*(undefined4 *)(this + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x90) = pTVar6;
  (**(code **)(&stack0x00000014 + iVar1))(piVar12,pTVar6);
  String::~String((String *)(&stack0x00000094 + iVar1));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x90));
  L_PrintLog((char *)(DAT_00108b0c + 0x108820),(char *)(DAT_00108b10 + 0x108822));
  sprintf(&stack0x000001a8 + iVar1,(char *)(DAT_00108b14 + 0x108830),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_00108b18 + 0x10883c),&stack0x000001a8 + iVar1);
  piVar12 = *(int **)(this + 0x90);
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_00108b1c + iVar2 * 4 + 0x10886c));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000018 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,uVar3,1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000154 + iVar1));
  String::String((String *)(&stack0x0000009c + iVar1),(char *)(DAT_00108b20 + 0x10887c));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x0000009c + iVar1);
  String::~String((String *)(&stack0x0000009c + iVar1));
  String::valueOf((long)(&stack0x000000a4 + iVar1));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x000000a4 + iVar1);
  String::~String((String *)(&stack0x000000a4 + iVar1));
  iVar2 = __aeabi_fcmpeq(*(undefined4 *)(&stack0x000002dc + iVar1),0x3f800000);
  if (iVar2 == 0) {
    String::String((String *)(&stack0x000000ac + iVar1),(char *)(DAT_00108b24 + 0x1088b8));
    StringBuffer::append(&stack0x00000154 + iVar1,&stack0x000000ac + iVar1);
    String::~String((String *)(&stack0x000000ac + iVar1));
  }
  piVar12 = *(int **)(this + 0x90);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar11)(piVar12,&stack0x000000b4 + iVar1);
  String::~String((String *)(&stack0x000000b4 + iVar1));
  piVar12 = *(int **)(this + 0x90);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_00108b28 + iVar2 * 4 + 0x108968));
  __mulsf3(uVar3,*(undefined4 *)((int)&param_9 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,(int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,uVar3);
  piVar12 = *(int **)(this + 0x6c);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x000000bc + iVar1),(char *)(DAT_00108b2c + 0x10892c));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar20 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  *(undefined4 *)((int)&param_6 + iVar1) = 0;
  *(undefined4 *)((int)&param_5 + iVar1) = 9;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x000000bc + iVar1,*(undefined4 *)(this + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x94) = pTVar6;
  (*pcVar11)(piVar12,pTVar6);
  String::~String((String *)(&stack0x000000bc + iVar1));
  piVar12 = *(int **)(*(int *)((int)&param_8 + iVar1) + DAT_00108b30);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x94));
  L_PrintLog((char *)(DAT_00108b34 + 0x108982),(char *)(DAT_00108b38 + 0x108984));
  sprintf(&stack0x000001a8 + iVar1,(char *)(DAT_00108b3c + 0x108992),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_00108b40 + 0x10899e),&stack0x000001a8 + iVar1);
  piVar12 = *(int **)(this + 0x94);
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(int *)(DAT_00108b44 + iVar2 * 4 + 0x1089ce) + 100);
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000018 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,uVar3,1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000170 + iVar1));
  String::String((String *)(&stack0x000000c4 + iVar1),(char *)(DAT_00108b48 + 0x1089e0));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000c4 + iVar1);
  String::~String((String *)(&stack0x000000c4 + iVar1));
  String::valueOf((int)(&stack0x000000cc + iVar1));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000cc + iVar1);
  String::~String((String *)(&stack0x000000cc + iVar1));
  String::String((String *)(&stack0x000000d4 + iVar1),(char *)(DAT_00108b4c + 0x108a0e));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000d4 + iVar1);
  String::~String((String *)(&stack0x000000d4 + iVar1));
  String::valueOf((int)(&stack0x000000dc + iVar1));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000dc + iVar1);
  String::~String((String *)(&stack0x000000dc + iVar1));
  String::String((String *)(&stack0x000000e4 + iVar1),(char *)(DAT_00108b50 + 0x108a3c));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000e4 + iVar1);
  String::~String((String *)(&stack0x000000e4 + iVar1));
  piVar12 = *(int **)(this + 0x94);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar11)(piVar12,&stack0x000000ec + iVar1);
  String::~String((String *)(&stack0x000000ec + iVar1));
  piVar12 = *(int **)(this + 0x94);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)((int)&DAT_00108b04 + DAT_00108b54 + iVar2 * 4));
  __mulsf3(uVar3,*(undefined4 *)((int)&param_9 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,(int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,uVar3);
  piVar12 = *(int **)(this + 0x6c);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x000000f4 + iVar1),(char *)(DAT_00108b58 + 0x108ab0));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar21 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  *(undefined4 *)((int)&param_6 + iVar1) = 0;
  *(undefined4 *)((int)&param_5 + iVar1) = 9;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x000000f4 + iVar1,*(undefined4 *)(this + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x98) = pTVar6;
  (*pcVar11)(piVar12,pTVar6);
  String::~String((String *)(&stack0x000000f4 + iVar1));
  piVar12 = *(int **)(*(int *)((int)&param_8 + iVar1) + DAT_00108b30);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x98));
  L_PrintLog((char *)(DAT_00108ee4 + 0x108b64),(char *)(DAT_00108ee8 + 0x108b66));
  sprintf(&stack0x000001a8 + iVar1,(char *)(DAT_00108eec + 0x108b74),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_00108ef0 + 0x108b80),&stack0x000001a8 + iVar1);
  piVar12 = *(int **)(this + 0x98);
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_00108ef4 + iVar2 * 4 + 0x108bb0));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000018 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,uVar3,1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x0000018c + iVar1));
  String::String((String *)(&stack0x000000fc + iVar1),(char *)(DAT_00108ef8 + 0x108bc0));
  StringBuffer::append(&stack0x0000018c + iVar1,&stack0x000000fc + iVar1);
  String::~String((String *)(&stack0x000000fc + iVar1));
  String::valueOf((int)(&stack0x00000104 + iVar1));
  StringBuffer::append(&stack0x0000018c + iVar1,&stack0x00000104 + iVar1);
  String::~String((String *)(&stack0x00000104 + iVar1));
  piVar12 = *(int **)(this + 0x98);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar11)(piVar12,&stack0x0000010c + iVar1);
  String::~String((String *)(&stack0x0000010c + iVar1));
  piVar12 = *(int **)(this + 0x98);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_00108efc + iVar2 * 4 + 0x108c36));
  __mulsf3(uVar3,*(undefined4 *)((int)&param_9 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,(int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,uVar3);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_00108f00),10,false);
  this_01 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
  *puVar22 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  ZCImageButton::ZCImageButton
            (this_01,'\x12',pCVar4,(CImage *)0x0,*piVar23,*(int *)(&stack0xfffffff0 + iVar1),
             (bool)(&stack0xfffffff4)[iVar1]);
  *(ZCImageButton **)(this + 0xa8) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  iVar2 = *(int *)(this + 0x68);
  *(undefined4 *)((int)&param_9 + iVar1) = *(undefined4 *)(**(int **)(this + 0xa8) + 0x2c);
  String::String((String *)(&stack0x00000114 + iVar1),
                 (String *)
                 (*(int *)(*(int *)(iVar2 + 0x4b0) + 8) +
                 **(int **)(*(int *)((int)&param_8 + iVar1) + DAT_00108f04) * 8));
  iVar8 = *(int *)(this + 0x68);
  iVar2 = SmDev();
  *(undefined4 *)(&stack0x00000018 + iVar1) =
       *(undefined4 *)((*(int *)(DAT_00108f08 + iVar2 * 4 + 0x108cd0) + 0x136) * 4 + iVar8);
  iVar2 = *(int *)(this + 0xa8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(iVar2 + 0x10);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  uVar3 = *(undefined4 *)(&stack0x00000014 + iVar1);
  *puVar24 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)((int)&param_6 + iVar1) = 0;
  *(undefined4 *)((int)&param_7 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar3;
  *(undefined4 *)((int)&param_5 + iVar1) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar9;
  BitmapTextElement::BitmapTextElement
            (pBVar7,&stack0x00000114 + iVar1,*(undefined4 *)(&stack0x00000018 + iVar1),0xffffffff);
  *(BitmapTextElement **)(this + 0x80) = pBVar7;
  (**(code **)((int)&param_9 + iVar1))(iVar2,pBVar7);
  String::~String((String *)(&stack0x00000114 + iVar1));
  *(undefined1 *)(*(int *)(this + 0x80) + 0x7f) = 0x12;
  iVar2 = SmDev();
  if (iVar2 == 0) {
    piVar12 = *(int **)(this + 0xa8);
    (**(code **)(*piVar12 + 0x14))(piVar12,*(int *)(this + 0xc) / 2);
    iVar2 = *(int *)(*(int *)(this + 0x6c) + 0xc);
    iVar8 = *(int *)(*(int *)(this + 0xa8) + 0x10) / 2 + *(int *)(*(int *)(this + 0x6c) + 0x10);
  }
  else {
    piVar12 = *(int **)(this + 0xa8);
    (**(code **)(*piVar12 + 0x14))
              (piVar12,*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) - piVar12[4] / 2);
    iVar2 = *(int *)(*(int *)(this + 0x6c) + 0xc);
    iVar8 = *(int *)(*(int *)(this + 0x6c) + 0x10);
  }
  ScreenElement::setSize((ScreenElement *)this,iVar2,iVar8);
  this[0xbc] = (EventRaid2RewardScreen)0x1;
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x0000018c + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000170 + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000154 + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000138 + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x0000011c + iVar1));
  if (*(int *)(&stack0x000002a8 + iVar1) ==
      **(int **)(*(int *)((int)&param_8 + iVar1) + DAT_00108f0c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


