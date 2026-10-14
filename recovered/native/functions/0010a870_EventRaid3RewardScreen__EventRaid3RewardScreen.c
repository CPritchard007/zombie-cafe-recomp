/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010a870 EventRaid3RewardScreen::EventRaid3RewardScreen */

/* EventRaid3RewardScreen::EventRaid3RewardScreen(int, int, int, float, long, long, int, int, int)
    */

void __thiscall
EventRaid3RewardScreen::EventRaid3RewardScreen
          (EventRaid3RewardScreen *this,int param_1,int param_2,int param_3,float param_4,
          long param_5,long param_6,int param_7,int param_8,int param_9)

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
  
  iVar1 = DAT_0010ac30;
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_0010ac30);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_0010ac30);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_0010ac30);
  piVar16 = (int *)(&stack0xffffffec + DAT_0010ac30);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_0010ac30);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_0010ac30);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_0010ac30);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_0010ac30);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_0010ac30);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_0010ac30);
  piVar23 = (int *)(&stack0xffffffec + DAT_0010ac30);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_0010ac30);
  *(int *)(&stack0x00000020 + DAT_0010ac30) = param_1;
  *(int *)(&stack0x00000028 + DAT_0010ac30) = param_3;
  *(int *)((int)&param_9 + DAT_0010ac30) = DAT_0010ac34 + 0x10a884;
  *(int *)(&stack0x00000024 + DAT_0010ac30) = param_2;
  *(undefined4 *)(&stack0x000002a0 + DAT_0010ac30) =
       **(undefined4 **)(DAT_0010ac34 + 0x10a884 + DAT_0010ac38);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(*(int *)((int)&param_9 + iVar1) + DAT_0010ac3c) + 8;
  CapcomApp::getInstance();
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(iVar2 + 0x44);
  iVar2 = CapcomApp::getInstance();
  iVar8 = *(int *)((int)&param_9 + iVar1);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(iVar2 + 4);
  uVar3 = FontManager::addFont(**(int **)(iVar8 + DAT_0010ac40),true);
  *(undefined4 *)(this + 0x74) = uVar3;
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + 0x7f0),2,false)
  ;
  this_00 = (ImageElement *)operator_new(0x98);
  *puVar13 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  ImageElement::ImageElement
            (this_00,pCVar4,extraout_s0,extraout_s1,(uchar)DAT_0010ac44,(bool)(uchar)DAT_0010ac44);
  *(ImageElement **)(this + 0x6c) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x6c) + 0xc),
             *(int *)(*(int *)(this + 0x6c) + 0x10));
  String::String((String *)(&stack0x0000002c + iVar1),(char *)(DAT_0010ac48 + 0x10a90c));
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
  piVar10 = *(int **)(*(int *)((int)&param_9 + iVar1) + DAT_0010ac4c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x84));
  L_PrintLog((char *)(DAT_0010ac50 + 0x10a95e),(char *)(DAT_0010ac54 + 0x10a960));
  sprintf(&stack0x000001a0 + iVar1,(char *)(DAT_0010ac58 + 0x10a96e),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_0010ac5c + 0x10a97a),&stack0x000001a0 + iVar1);
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
  uVar3 = __floatsisf(*(undefined4 *)(iVar2 * 4 + DAT_0010ac60 + 0x10a9c2));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000014 + iVar1));
  uVar3 = __fixsfsi();
  (**(code **)(&stack0x0000001c + iVar1))(piVar12,iVar8 / 2,uVar3);
  piVar12 = *(int **)(this + 0x6c);
  *(undefined4 *)(&stack0x0000001c + iVar1) = *(undefined4 *)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x00000034 + iVar1),(char *)(DAT_0010ac64 + 0x10a9e6));
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
  L_PrintLog((char *)(DAT_0010ac68 + 0x10aa3c),(char *)(DAT_0010ac6c + 0x10aa3e));
  sprintf(&stack0x000001a0 + iVar1,(char *)(DAT_0010ac70 + 0x10aa4c),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_0010ac74 + 0x10aa58),&stack0x000001a0 + iVar1);
  piVar12 = *(int **)(this + 0x88);
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  (*pcVar11)(piVar12,*(undefined4 *)(DAT_0010ac78 + iVar2 * 4 + 0x10aa8a),1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000114 + iVar1));
  String::String((String *)(&stack0x0000003c + iVar1),(char *)(DAT_0010ac7c + 0x10aa88));
  StringBuffer::append(&stack0x00000114 + iVar1,&stack0x0000003c + iVar1);
  String::~String((String *)(&stack0x0000003c + iVar1));
  String::valueOf((int)(&stack0x00000044 + iVar1));
  StringBuffer::append(&stack0x00000114 + iVar1,&stack0x00000044 + iVar1);
  String::~String((String *)(&stack0x00000044 + iVar1));
  String::String((String *)(&stack0x0000004c + iVar1),(char *)(DAT_0010ac80 + 0x10aab6));
  StringBuffer::append(&stack0x00000114 + iVar1,&stack0x0000004c + iVar1);
  String::~String((String *)(&stack0x0000004c + iVar1));
  String::valueOf((int)(&stack0x00000054 + iVar1));
  StringBuffer::append(&stack0x00000114 + iVar1,&stack0x00000054 + iVar1);
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
  uVar3 = __floatsisf(*(undefined4 *)(DAT_0010ac84 + iVar2 * 4 + 0x10ab4c));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000014 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,(int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,uVar3);
  piVar12 = *(int **)(this + 0x6c);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x00000064 + iVar1),(char *)(DAT_0010ac88 + 0x10ab40));
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
  piVar10 = *(int **)(*(int *)((int)&param_9 + iVar1) + DAT_0010ac4c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x8c));
  L_PrintLog((char *)(DAT_0010ac8c + 0x10ab98),(char *)(DAT_0010ac90 + 0x10ab9a));
  sprintf(&stack0x000001a0 + iVar1,(char *)(DAT_0010ac94 + 0x10aba8),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_0010ac98 + 0x10abb4),&stack0x000001a0 + iVar1);
  piVar12 = *(int **)(this + 0x8c);
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  (*pcVar11)(piVar12,*(undefined4 *)(DAT_0010ac9c + iVar2 * 4 + 0x10abe6),1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000130 + iVar1));
  String::String((String *)(&stack0x0000006c + iVar1),(char *)(DAT_0010aca0 + 0x10abe4));
  StringBuffer::append(&stack0x00000130 + iVar1,&stack0x0000006c + iVar1);
  String::~String((String *)(&stack0x0000006c + iVar1));
  String::valueOf((int)(&stack0x00000074 + iVar1));
  StringBuffer::append(&stack0x00000130 + iVar1,&stack0x00000074 + iVar1);
  String::~String((String *)(&stack0x00000074 + iVar1));
  iVar2 = __aeabi_fcmpgt(*(undefined4 *)(&stack0x000002bc + iVar1),0x3f800000);
  if (iVar2 != 0) {
    String::String((String *)(&stack0x0000007c + iVar1),(char *)(DAT_0010aca4 + 0x10ac20));
    StringBuffer::append(&stack0x00000130 + iVar1,&stack0x0000007c + iVar1);
    fVar25 = (float)String::~String((String *)(&stack0x0000007c + iVar1));
    String::valueOf((String *)(&stack0x00000084 + iVar1),fVar25);
    StringBuffer::append(&stack0x00000130 + iVar1,&stack0x00000084 + iVar1);
    String::~String((String *)(&stack0x00000084 + iVar1));
  }
  piVar12 = *(int **)(this + 0x8c);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar11)(piVar12,&stack0x0000008c + iVar1);
  String::~String((String *)(&stack0x0000008c + iVar1));
  piVar12 = *(int **)(this + 0x8c);
  *(undefined4 *)(&stack0x00000018 + iVar1) = *(undefined4 *)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_0010b0c4 + iVar2 * 4 + 0x10ad4c));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000014 + iVar1));
  uVar3 = __fixsfsi();
  (**(code **)(&stack0x00000018 + iVar1))
            (piVar12,(int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,uVar3);
  piVar12 = *(int **)(this + 0x6c);
  *(undefined4 *)(&stack0x00000018 + iVar1) = *(undefined4 *)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x00000094 + iVar1),(char *)(DAT_0010b0c8 + 0x10ad2a));
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
  (**(code **)(&stack0x00000018 + iVar1))(piVar12,pTVar6);
  String::~String((String *)(&stack0x00000094 + iVar1));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x90));
  L_PrintLog((char *)(DAT_0010b0cc + 0x10ad80),(char *)(DAT_0010b0d0 + 0x10ad82));
  sprintf(&stack0x000001a0 + iVar1,(char *)(DAT_0010b0d4 + 0x10ad90),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_0010b0d8 + 0x10ad9c),&stack0x000001a0 + iVar1);
  piVar12 = *(int **)(this + 0x90);
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  (*pcVar11)(piVar12,*(undefined4 *)(DAT_0010b0dc + iVar2 * 4 + 0x10adce),1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x0000014c + iVar1));
  String::String((String *)(&stack0x0000009c + iVar1),(char *)(DAT_0010b0e0 + 0x10adcc));
  StringBuffer::append(&stack0x0000014c + iVar1,&stack0x0000009c + iVar1);
  String::~String((String *)(&stack0x0000009c + iVar1));
  String::valueOf((long)(&stack0x000000a4 + iVar1));
  StringBuffer::append(&stack0x0000014c + iVar1,&stack0x000000a4 + iVar1);
  String::~String((String *)(&stack0x000000a4 + iVar1));
  piVar12 = *(int **)(this + 0x90);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar11)(piVar12,&stack0x000000ac + iVar1);
  String::~String((String *)(&stack0x000000ac + iVar1));
  piVar12 = *(int **)(this + 0x90);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_0010b0e4 + iVar2 * 4 + 0x10ae92));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000014 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,(int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,uVar3);
  piVar12 = *(int **)(this + 0x6c);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x000000b4 + iVar1),(char *)(DAT_0010b0e8 + 0x10ae56));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar20 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  *(undefined4 *)((int)&param_6 + iVar1) = 0;
  *(undefined4 *)((int)&param_5 + iVar1) = 9;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x000000b4 + iVar1,*(undefined4 *)(this + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x94) = pTVar6;
  (*pcVar11)(piVar12,pTVar6);
  String::~String((String *)(&stack0x000000b4 + iVar1));
  piVar12 = *(int **)(*(int *)((int)&param_9 + iVar1) + DAT_0010b0ec);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x94));
  L_PrintLog((char *)(DAT_0010b0f0 + 0x10aeac),(char *)(DAT_0010b0f4 + 0x10aeae));
  sprintf(&stack0x000001a0 + iVar1,(char *)(DAT_0010b0f8 + 0x10aebc),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_0010b0fc + 0x10aec8),&stack0x000001a0 + iVar1);
  piVar12 = *(int **)(this + 0x94);
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  (*pcVar11)(piVar12,*(undefined4 *)(DAT_0010b100 + iVar2 * 4 + 0x10aefa),1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000168 + iVar1));
  String::String((String *)(&stack0x000000bc + iVar1),(char *)(DAT_0010b104 + 0x10aef8));
  StringBuffer::append(&stack0x00000168 + iVar1,&stack0x000000bc + iVar1);
  String::~String((String *)(&stack0x000000bc + iVar1));
  String::valueOf((int)(&stack0x000000c4 + iVar1));
  StringBuffer::append(&stack0x00000168 + iVar1,&stack0x000000c4 + iVar1);
  String::~String((String *)(&stack0x000000c4 + iVar1));
  String::String((String *)(&stack0x000000cc + iVar1),(char *)(DAT_0010b108 + 0x10af26));
  StringBuffer::append(&stack0x00000168 + iVar1,&stack0x000000cc + iVar1);
  String::~String((String *)(&stack0x000000cc + iVar1));
  String::valueOf((int)(&stack0x000000d4 + iVar1));
  StringBuffer::append(&stack0x00000168 + iVar1,&stack0x000000d4 + iVar1);
  String::~String((String *)(&stack0x000000d4 + iVar1));
  String::String((String *)(&stack0x000000dc + iVar1),(char *)(DAT_0010b10c + 0x10af54));
  StringBuffer::append(&stack0x00000168 + iVar1,&stack0x000000dc + iVar1);
  String::~String((String *)(&stack0x000000dc + iVar1));
  piVar12 = *(int **)(this + 0x94);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar11)(piVar12,&stack0x000000e4 + iVar1);
  String::~String((String *)(&stack0x000000e4 + iVar1));
  piVar12 = *(int **)(this + 0x94);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_0010b110 + iVar2 * 4 + 0x10b01c));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000014 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,(int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,uVar3);
  piVar12 = *(int **)(this + 0x6c);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x000000ec + iVar1),(char *)(DAT_0010b114 + 0x10afc8));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar21 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  *(undefined4 *)((int)&param_6 + iVar1) = 0;
  *(undefined4 *)((int)&param_5 + iVar1) = 9;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x000000ec + iVar1,*(undefined4 *)(this + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x98) = pTVar6;
  (*pcVar11)(piVar12,pTVar6);
  String::~String((String *)(&stack0x000000ec + iVar1));
  piVar12 = *(int **)(*(int *)((int)&param_9 + iVar1) + DAT_0010b0ec);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x98));
  L_PrintLog((char *)(DAT_0010b118 + 0x10b01e),(char *)(DAT_0010b11c + 0x10b020));
  sprintf(&stack0x000001a0 + iVar1,(char *)(DAT_0010b120 + 0x10b02e),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_0010b124 + 0x10b03a),&stack0x000001a0 + iVar1);
  piVar12 = *(int **)(this + 0x98);
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  (*pcVar11)(piVar12,*(undefined4 *)(DAT_0010b128 + iVar2 * 4 + 0x10b06c),1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000184 + iVar1));
  String::String((String *)(&stack0x000000f4 + iVar1),(char *)(DAT_0010b12c + 0x10b06a));
  StringBuffer::append(&stack0x00000184 + iVar1,&stack0x000000f4 + iVar1);
  String::~String((String *)(&stack0x000000f4 + iVar1));
  String::valueOf((int)(&stack0x000000fc + iVar1));
  StringBuffer::append(&stack0x00000184 + iVar1,&stack0x000000fc + iVar1);
  String::~String((String *)(&stack0x000000fc + iVar1));
  piVar12 = *(int **)(this + 0x98);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar11)(piVar12,&stack0x00000104 + iVar1);
  String::~String((String *)(&stack0x00000104 + iVar1));
  piVar12 = *(int **)(this + 0x98);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_0010b424 + iVar2 * 4 + 0x10b150));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000014 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar11)(piVar12,(int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,uVar3);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_0010b428),10,false);
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
  *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(**(int **)(this + 0xa8) + 0x2c);
  String::String((String *)(&stack0x0000010c + iVar1),
                 (String *)
                 (*(int *)(*(int *)(iVar2 + 0x4b0) + 8) +
                 **(int **)(*(int *)((int)&param_9 + iVar1) + DAT_0010b42c) * 8));
  iVar8 = *(int *)(this + 0x68);
  iVar2 = SmDev();
  *(undefined4 *)(&stack0x00000018 + iVar1) =
       *(undefined4 *)((*(int *)(DAT_0010b430 + iVar2 * 4 + 0x10b1ea) + 0x136) * 4 + iVar8);
  iVar2 = *(int *)(this + 0xa8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(&stack0x0000001c + iVar1) = *(undefined4 *)(iVar2 + 0x10);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  uVar3 = *(undefined4 *)(&stack0x0000001c + iVar1);
  *puVar24 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)((int)&param_6 + iVar1) = 0;
  *(undefined4 *)((int)&param_7 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar3;
  *(undefined4 *)((int)&param_5 + iVar1) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar9;
  BitmapTextElement::BitmapTextElement
            (pBVar7,&stack0x0000010c + iVar1,*(undefined4 *)(&stack0x00000018 + iVar1),0xffffffff);
  *(BitmapTextElement **)(this + 0x80) = pBVar7;
  (**(code **)(&stack0x00000014 + iVar1))(iVar2,pBVar7);
  String::~String((String *)(&stack0x0000010c + iVar1));
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
  this[0xbc] = (EventRaid3RewardScreen)0x1;
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000184 + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000168 + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x0000014c + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000130 + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000114 + iVar1));
  if (*(int *)(&stack0x000002a0 + iVar1) ==
      **(int **)(*(int *)((int)&param_9 + iVar1) + DAT_0010b434)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


