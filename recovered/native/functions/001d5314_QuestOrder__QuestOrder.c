/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d5314 QuestOrder::QuestOrder */

/* QuestOrder::QuestOrder(QuestDialog*, ActiveQuest*, int) */

void __thiscall
QuestOrder::QuestOrder(QuestOrder *this,QuestDialog *param_1,ActiveQuest *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ImageElement *pIVar5;
  TrueTypeTextElement *pTVar6;
  Vector<TrueTypeTextElement*> *this_00;
  BitmapTextElement *pBVar7;
  CImage *pCVar8;
  ZCImageButton *this_01;
  ScreenElement *pSVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  int iVar15;
  undefined4 *puVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  undefined4 uStack_4;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int *piVar22;
  undefined4 *puVar23;
  
  iVar2 = DAT_001d55d4;
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_001d55d4);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_001d55d4);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_001d55d4);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_001d55d4);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_001d55d4);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_001d55d4);
  piVar22 = (int *)(&stack0xffffffec + DAT_001d55d4);
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_001d55d4);
  *(int *)(&stack0x00000020 + DAT_001d55d4) = param_3;
  iVar15 = DAT_001d55d8 + 0x1d5326;
  *(undefined4 *)(&stack0x00000340 + DAT_001d55d4) = **(undefined4 **)(iVar15 + DAT_001d55dc);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar15 + DAT_001d55e0) + 8;
  *(ActiveQuest **)(this + 0x8c) = param_2;
  *(QuestDialog **)(this + 0x60) = param_1;
  iVar3 = CapcomApp::getInstance();
  iVar13 = *(int *)(iVar3 + 4);
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(iVar3 + 0x40);
  CapcomApp::getInstance();
  uVar4 = PackedImage::getImage
                    (*(PackedImage **)(*(int *)(param_1 + 0x60) + DAT_001d55e4),199,false);
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar4;
  pIVar5 = (ImageElement *)operator_new(0x98);
  *puVar16 = 0xc;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(ImageElement **)(&stack0x0000000c + iVar2) = pIVar5;
  ImageElement::ImageElement
            (pIVar5,*(CImage **)(&stack0x00000010 + iVar2),extraout_s0,extraout_s1,'\0',false);
  iVar3 = DAT_001d55e4;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(&stack0x0000000c + iVar2);
  uVar4 = PackedImage::getImage(*(PackedImage **)(*(int *)(param_1 + 0x60) + iVar3),0xc6,false);
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar4;
  pIVar5 = (ImageElement *)operator_new(0x98);
  *puVar17 = 0xc;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(ImageElement **)(&stack0x0000000c + iVar2) = pIVar5;
  ImageElement::ImageElement
            (pIVar5,*(CImage **)(&stack0x00000010 + iVar2),extraout_s0_00,extraout_s1_00,'\0',false)
  ;
  *(undefined4 *)(this + 100) = *(undefined4 *)(&stack0x0000000c + iVar2);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000224 + iVar2));
  iVar3 = QuestData::getData(**(int **)(this + 0x8c));
  String::String((String *)(&stack0x00000038 + iVar2),(String *)(iVar3 + 0x54));
  StringBuffer::append(&stack0x00000224 + iVar2,&stack0x00000038 + iVar2);
  String::~String((String *)(&stack0x00000038 + iVar2));
  StringBuffer::toString();
  String::String((String *)(&stack0x00000030 + iVar2),(char *)(DAT_001d55e8 + 0x1d53fa));
  String::String((String *)(&stack0x00000048 + iVar2),(String *)(&stack0x00000028 + iVar2));
  String::String((String *)(&stack0x00000050 + iVar2),(char *)(DAT_001d55ec + 0x1d540c));
  QuestData::getData(**(int **)(this + 0x8c));
  String::valueOf((long)(&stack0x00000058 + iVar2));
  StringUtil::replace((StringUtil *)(&stack0x00000040 + iVar2),&stack0x00000048 + iVar2,
                      &stack0x00000050 + iVar2,&stack0x00000058 + iVar2);
  String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x00000040 + iVar2);
  String::~String((String *)(&stack0x00000040 + iVar2));
  String::~String((String *)(&stack0x00000058 + iVar2));
  String::~String((String *)(&stack0x00000050 + iVar2));
  String::~String((String *)(&stack0x00000048 + iVar2));
  iVar3 = QuestData::getData(**(int **)(this + 0x8c));
  iVar3 = **(int **)(iVar3 + 0x38);
  *(int *)(&stack0x0000000c + iVar2) = iVar3;
  if (iVar3 != -1) {
    if (*(int *)(&stack0x0000000c + iVar2) < (int)(uint)*(byte *)(iVar13 + DAT_001d55f0)) {
      String::String((String *)(&stack0x00000068 + iVar2),(String *)(&stack0x00000028 + iVar2));
      String::String((String *)(&stack0x00000070 + iVar2),(char *)(DAT_001d55f4 + 0x1d5480));
      iVar3 = QuestData::getData(**(int **)(this + 0x8c));
      String::String((String *)(&stack0x00000080 + iVar2),
                     (String *)(*(int *)(iVar13 + 0x4e8) + **(int **)(iVar3 + 0x38) * 0x1c));
      operator+(&stack0x00000078 + iVar2,DAT_001d55f8 + 0x1d54ae,&stack0x00000080 + iVar2);
      StringUtil::replace((StringUtil *)(&stack0x00000060 + iVar2),&stack0x00000068 + iVar2,
                          &stack0x00000070 + iVar2,&stack0x00000078 + iVar2);
      String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x00000060 + iVar2);
      String::~String((String *)(&stack0x00000060 + iVar2));
      String::~String((String *)(&stack0x00000078 + iVar2));
      String::~String((String *)(&stack0x00000080 + iVar2));
      String::~String((String *)(&stack0x00000070 + iVar2));
      String::~String((String *)(&stack0x00000068 + iVar2));
    }
    if (*(int *)(&stack0x0000000c + iVar2) < (int)(uint)*(ushort *)(iVar13 + DAT_001d55fc)) {
      String::String((String *)(&stack0x00000090 + iVar2),(String *)(&stack0x00000028 + iVar2));
      String::String((String *)(&stack0x00000098 + iVar2),(char *)(DAT_001d5600 + 0x1d54fe));
      iVar3 = QuestData::getData(**(int **)(this + 0x8c));
      String::String((String *)(&stack0x000000a0 + iVar2),
                     (String *)
                     (*(int *)(**(int **)(iVar3 + 0x38) * 4 + *(int *)(iVar13 + DAT_001d5604)) +
                     DAT_001d5608));
      StringUtil::replace((StringUtil *)(&stack0x00000088 + iVar2),&stack0x00000090 + iVar2,
                          &stack0x00000098 + iVar2,&stack0x000000a0 + iVar2);
      String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x00000088 + iVar2);
      String::~String((String *)(&stack0x00000088 + iVar2));
      String::~String((String *)(&stack0x000000a0 + iVar2));
      String::~String((String *)(&stack0x00000098 + iVar2));
      String::~String((String *)(&stack0x00000090 + iVar2));
      iVar3 = QuestData::getData(**(int **)(this + 0x8c));
      if (*(char *)(*(int *)(**(int **)(iVar3 + 0x38) * 4 + *(int *)(iVar13 + DAT_001d5604)) +
                   DAT_001d560c) == '\0') {
        Vector<String>::elementAt((int)(&stack0x000000d0 + iVar2));
        String::operator=((String *)(&stack0x00000030 + iVar2),&stack0x000000d0 + iVar2);
        String::~String((String *)(&stack0x000000d0 + iVar2));
        String::String((String *)(&stack0x000000e0 + iVar2),(String *)(&stack0x00000028 + iVar2));
        String::String((String *)(&stack0x000000e8 + iVar2),(char *)(DAT_001d59c8 + 0x1d5642));
        String::String((String *)(&stack0x000000f0 + iVar2),(String *)(&stack0x00000030 + iVar2));
        StringUtil::replace((StringUtil *)(&stack0x000000d8 + iVar2),&stack0x000000e0 + iVar2,
                            &stack0x000000e8 + iVar2,&stack0x000000f0 + iVar2);
        String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x000000d8 + iVar2);
        String::~String((String *)(&stack0x000000d8 + iVar2));
        String::~String((String *)(&stack0x000000f0 + iVar2));
        String::~String((String *)(&stack0x000000e8 + iVar2));
        puVar1 = &stack0x000000e0;
      }
      else {
        Vector<String>::elementAt((int)(&stack0x000000a8 + iVar2));
        String::operator=((String *)(&stack0x00000030 + iVar2),&stack0x000000a8 + iVar2);
        String::~String((String *)(&stack0x000000a8 + iVar2));
        String::String((String *)(&stack0x000000b8 + iVar2),(String *)(&stack0x00000028 + iVar2));
        String::String((String *)(&stack0x000000c0 + iVar2),(char *)(DAT_001d5614 + 0x1d559e));
        String::String((String *)(&stack0x000000c8 + iVar2),(String *)(&stack0x00000030 + iVar2));
        StringUtil::replace((StringUtil *)(&stack0x000000b0 + iVar2),&stack0x000000b8 + iVar2,
                            &stack0x000000c0 + iVar2,&stack0x000000c8 + iVar2);
        String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x000000b0 + iVar2);
        String::~String((String *)(&stack0x000000b0 + iVar2));
        String::~String((String *)(&stack0x000000c8 + iVar2));
        String::~String((String *)(&stack0x000000c0 + iVar2));
        puVar1 = &stack0x000000b8;
      }
      String::~String((String *)(puVar1 + iVar2));
    }
    if (*(int *)(&stack0x0000000c + iVar2) < (int)(uint)*(ushort *)(iVar13 + DAT_001d59cc)) {
      String::String((String *)(&stack0x00000100 + iVar2),(String *)(&stack0x00000028 + iVar2));
      String::String((String *)(&stack0x00000108 + iVar2),(char *)(DAT_001d59d0 + 0x1d5694));
      iVar3 = QuestData::getData(**(int **)(this + 0x8c));
      String::String((String *)(&stack0x00000110 + iVar2),
                     (String *)
                     (*(int *)(**(int **)(iVar3 + 0x38) * 4 + *(int *)(iVar13 + DAT_001d59d8)) +
                     DAT_001d59d4));
      StringUtil::replace((StringUtil *)(&stack0x000000f8 + iVar2),&stack0x00000100 + iVar2,
                          &stack0x00000108 + iVar2,&stack0x00000110 + iVar2);
      String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x000000f8 + iVar2);
      String::~String((String *)(&stack0x000000f8 + iVar2));
      String::~String((String *)(&stack0x00000110 + iVar2));
      String::~String((String *)(&stack0x00000108 + iVar2));
      String::~String((String *)(&stack0x00000100 + iVar2));
      iVar3 = QuestData::getData(**(int **)(this + 0x8c));
      if (*(char *)(*(int *)(**(int **)(iVar3 + 0x38) * 4 + *(int *)(iVar13 + DAT_001d59d8)) +
                   DAT_001d59dc) == '\0') {
        Vector<String>::elementAt((int)(&stack0x00000140 + iVar2));
        String::operator=((String *)(&stack0x00000030 + iVar2),&stack0x00000140 + iVar2);
        String::~String((String *)(&stack0x00000140 + iVar2));
        String::String((String *)(&stack0x00000150 + iVar2),(String *)(&stack0x00000028 + iVar2));
        String::String((String *)(&stack0x00000158 + iVar2),(char *)(DAT_001d59e8 + 0x1d5792));
        String::String((String *)(&stack0x00000160 + iVar2),(String *)(&stack0x00000030 + iVar2));
        StringUtil::replace((StringUtil *)(&stack0x00000148 + iVar2),&stack0x00000150 + iVar2,
                            &stack0x00000158 + iVar2,&stack0x00000160 + iVar2);
        String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x00000148 + iVar2);
        String::~String((String *)(&stack0x00000148 + iVar2));
        String::~String((String *)(&stack0x00000160 + iVar2));
        String::~String((String *)(&stack0x00000158 + iVar2));
        puVar1 = &stack0x00000150;
      }
      else {
        Vector<String>::elementAt((int)(&stack0x00000118 + iVar2));
        String::operator=((String *)(&stack0x00000030 + iVar2),&stack0x00000118 + iVar2);
        String::~String((String *)(&stack0x00000118 + iVar2));
        String::String((String *)(&stack0x00000128 + iVar2),(String *)(&stack0x00000028 + iVar2));
        String::String((String *)(&stack0x00000130 + iVar2),(char *)(DAT_001d59e4 + 0x1d5734));
        String::String((String *)(&stack0x00000138 + iVar2),(String *)(&stack0x00000030 + iVar2));
        StringUtil::replace((StringUtil *)(&stack0x00000120 + iVar2),&stack0x00000128 + iVar2,
                            &stack0x00000130 + iVar2,&stack0x00000138 + iVar2);
        String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x00000120 + iVar2);
        String::~String((String *)(&stack0x00000120 + iVar2));
        String::~String((String *)(&stack0x00000138 + iVar2));
        String::~String((String *)(&stack0x00000130 + iVar2));
        puVar1 = &stack0x00000128;
      }
      String::~String((String *)(puVar1 + iVar2));
    }
    if (*(int *)(&stack0x0000000c + iVar2) < *(int *)(*(int *)(iVar13 + 0x7e8) + 0x90)) {
      String::String((String *)(&stack0x00000170 + iVar2),(String *)(&stack0x00000028 + iVar2));
      String::String((String *)(&stack0x00000178 + iVar2),(char *)(DAT_001d59ec + 0x1d57e8));
      iVar3 = QuestData::getData(**(int **)(this + 0x8c));
      String::String((String *)(&stack0x00000180 + iVar2),
                     (String *)
                     (*(int *)(**(int **)(iVar3 + 0x38) * 4 +
                              *(int *)(*(int *)(iVar13 + 0x7e8) + 0x94)) + 0x2c));
      StringUtil::replace((StringUtil *)(&stack0x00000168 + iVar2),&stack0x00000170 + iVar2,
                          &stack0x00000178 + iVar2,&stack0x00000180 + iVar2);
      String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x00000168 + iVar2);
      String::~String((String *)(&stack0x00000168 + iVar2));
      String::~String((String *)(&stack0x00000180 + iVar2));
      String::~String((String *)(&stack0x00000178 + iVar2));
      String::~String((String *)(&stack0x00000170 + iVar2));
    }
  }
  *(undefined4 *)(&stack0x0000000c + iVar2) = **(undefined4 **)(iVar15 + DAT_001d59f0);
  iVar3 = SmDev();
  uVar4 = FontManager::addFont
                    (*(int *)(&stack0x0000000c + iVar2),
                     SUB41(*(undefined4 *)(DAT_001d59f4 + iVar3 * 4 + 0x1d58b2),0));
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar4;
  String::String((String *)(&stack0x00000188 + iVar2),(String *)(&stack0x00000028 + iVar2));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar18 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(TrueTypeTextElement **)(&stack0x0000000c + iVar2) = pTVar6;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x00000188 + iVar2,*(undefined4 *)(&stack0x00000010 + iVar2),0xffffffff);
  pSVar9 = *(ScreenElement **)(&stack0x0000000c + iVar2);
  *(ScreenElement **)(this + 0x78) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String((String *)(&stack0x00000188 + iVar2));
  pTVar6 = *(TrueTypeTextElement **)(this + 0x78);
  this_00 = (Vector<TrueTypeTextElement*> *)**(undefined4 **)(iVar15 + DAT_001d59f8);
  *(undefined4 **)(&stack0x0000000c + iVar2) = *(undefined4 **)(iVar15 + DAT_001d59f8);
  Vector<TrueTypeTextElement*>::addElement(this_00,pTVar6);
  L_PrintLog((char *)(DAT_001d59fc + 0x1d58ae),(char *)(DAT_001d5a00 + 0x1d58b0));
  sprintf(&stack0x00000240 + iVar2,(char *)(DAT_001d5a04 + 0x1d58bc),
          *(int *)(**(int **)(&stack0x0000000c + iVar2) + 4) + 1);
  L_PrintLog((char *)(DAT_001d5a08 + 0x1d58cc),&stack0x00000240 + iVar2);
  iVar3 = **(int **)(this + 0x78);
  *(int **)(&stack0x0000000c + iVar2) = *(int **)(this + 0x78);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(iVar3 + 0x14);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*(int *)(this + 100) + 0xc);
  iVar3 = SmDev();
  (**(code **)(&stack0x00000010 + iVar2))
            (*(undefined4 *)(&stack0x0000000c + iVar2),
             *(int *)(&stack0x00000014 + iVar2) + *(int *)(DAT_001d5a0c + iVar3 * 4 + 0x1d5964),
             *(undefined4 *)(this + 8));
  iVar3 = *(int *)(this + 8) + *(int *)(*(int *)(this + 0x78) + 0x10);
  *(int *)(this + 8) = iVar3;
  *(int *)(&stack0x0000000c + iVar2) = iVar3;
  iVar3 = SmDev();
  if (*(int *)(&stack0x0000000c + iVar2) < *(int *)(DAT_001d5a10 + iVar3 * 4 + 0x1d5940)) {
    iVar3 = SmDev();
    *(undefined4 *)(this + 8) = *(undefined4 *)(DAT_001d5a14 + iVar3 * 4 + 0x1d5954);
  }
  String::~String((String *)(&stack0x00000030 + iVar2));
  String::~String((String *)(&stack0x00000028 + iVar2));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000224 + iVar2));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000224 + iVar2));
  iVar3 = QuestData::getData(**(int **)(this + 0x8c));
  if (*(int *)(iVar3 + 0x40) == -1) {
    if (*(short *)(iVar3 + 0x44) == -1) {
      if (*(short *)(iVar3 + 0x46) == -1) goto LAB_001d5b34;
      Vector<String>::elementAt((int)(&stack0x000001c0 + iVar2));
      StringBuffer::append(&stack0x00000224 + iVar2,&stack0x000001c0 + iVar2);
      String::~String((String *)(&stack0x000001c0 + iVar2));
      QuestData::getData(**(int **)(this + 0x8c));
      String::valueOf((int)(&stack0x000001c8 + iVar2));
      StringBuffer::append(&stack0x00000224 + iVar2,&stack0x000001c8 + iVar2);
      String::~String((String *)(&stack0x000001c8 + iVar2));
      Vector<String>::elementAt((int)(&stack0x000001d0 + iVar2));
      StringBuffer::append(&stack0x00000224 + iVar2,&stack0x000001d0 + iVar2);
      String::~String((String *)(&stack0x000001d0 + iVar2));
      *(undefined4 *)(this + 0x80) = 2;
      iVar3 = QuestData::getData(**(int **)(this + 0x8c));
      iVar3 = iVar3 + 8;
    }
    else {
      Vector<String>::elementAt((int)(&stack0x000001a8 + iVar2));
      StringBuffer::append(&stack0x00000224 + iVar2,&stack0x000001a8 + iVar2);
      String::~String((String *)(&stack0x000001a8 + iVar2));
      QuestData::getData(**(int **)(this + 0x8c));
      String::valueOf((int)(&stack0x000001b0 + iVar2));
      StringBuffer::append(&stack0x00000224 + iVar2,&stack0x000001b0 + iVar2);
      String::~String((String *)(&stack0x000001b0 + iVar2));
      String::String((String *)(&stack0x000001b8 + iVar2),(char *)(DAT_001d5aa4 + 0x1d5a78));
      StringBuffer::append(&stack0x00000224 + iVar2,&stack0x000001b8 + iVar2);
      String::~String((String *)(&stack0x000001b8 + iVar2));
      *(undefined4 *)(this + 0x80) = 1;
      iVar3 = QuestData::getData(**(int **)(this + 0x8c));
      iVar3 = iVar3 + 6;
    }
    iVar3 = (int)*(short *)(iVar3 + 0x3e);
  }
  else {
    Vector<String>::elementAt((int)(&stack0x00000190 + iVar2));
    StringBuffer::append(&stack0x00000224 + iVar2,&stack0x00000190 + iVar2);
    String::~String((String *)(&stack0x00000190 + iVar2));
    QuestData::getData(**(int **)(this + 0x8c));
    String::valueOf((long)(&stack0x00000198 + iVar2));
    StringBuffer::append(&stack0x00000224 + iVar2,&stack0x00000198 + iVar2);
    String::~String((String *)(&stack0x00000198 + iVar2));
    String::String((String *)(&stack0x000001a0 + iVar2),(char *)(DAT_001d5a1c + 0x1d599c));
    StringBuffer::append(&stack0x00000224 + iVar2,&stack0x000001a0 + iVar2);
    String::~String((String *)(&stack0x000001a0 + iVar2));
    *(undefined4 *)(this + 0x80) = 0;
    iVar3 = QuestData::getData(**(int **)(this + 0x8c));
    iVar3 = *(int *)(iVar3 + 0x40);
  }
  *(int *)(this + 0x84) = iVar3;
LAB_001d5b34:
  StringBuffer::toString();
  iVar3 = SmDev();
  *(undefined4 *)(&stack0x00000010 + iVar2) =
       *(undefined4 *)((*(int *)(DAT_001d5e88 + iVar3 * 4 + 0x1d5b90) + 0x136) * 4 + iVar13);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  *puVar19 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(BitmapTextElement **)(&stack0x0000000c + iVar2) = pBVar7;
  BitmapTextElement::BitmapTextElement
            (pBVar7,&stack0x000001d8 + iVar2,*(undefined4 *)(&stack0x00000010 + iVar2),0xffffffff);
  pSVar9 = *(ScreenElement **)(&stack0x0000000c + iVar2);
  *(ScreenElement **)(this + 0x6c) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String((String *)(&stack0x000001d8 + iVar2));
  piVar11 = *(int **)(this + 0x6c);
  *(int **)(&stack0x0000000c + iVar2) = piVar11;
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*(int *)(this + 100) + 0xc);
  iVar3 = SmDev();
  (**(code **)(&stack0x00000010 + iVar2))
            (*(undefined4 *)(&stack0x0000000c + iVar2),
             *(int *)(&stack0x00000014 + iVar2) + *(int *)(DAT_001d5e8c + iVar3 * 4 + 0x1d5c20),
             *(undefined4 *)(this + 8));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000224 + iVar2));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000208 + iVar2));
  String::valueOf((int)(&stack0x000001e0 + iVar2));
  StringBuffer::append(&stack0x00000208 + iVar2,&stack0x000001e0 + iVar2);
  String::~String((String *)(&stack0x000001e0 + iVar2));
  String::String((String *)(&stack0x000001e8 + iVar2),(char *)(DAT_001d5e90 + 0x1d5bf2));
  StringBuffer::append(&stack0x00000208 + iVar2,&stack0x000001e8 + iVar2);
  String::~String((String *)(&stack0x000001e8 + iVar2));
  QuestData::getData(**(int **)(this + 0x8c));
  String::valueOf((long)(&stack0x000001f0 + iVar2));
  StringBuffer::append(&stack0x00000208 + iVar2,&stack0x000001f0 + iVar2);
  String::~String((String *)(&stack0x000001f0 + iVar2));
  StringBuffer::toString();
  iVar3 = SmDev();
  *(undefined4 *)(&stack0x00000010 + iVar2) =
       *(undefined4 *)((*(int *)(DAT_001d5e94 + iVar3 * 4 + 0x1d5c80) + 0x136) * 4 + iVar13);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  *puVar20 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(BitmapTextElement **)(&stack0x0000000c + iVar2) = pBVar7;
  BitmapTextElement::BitmapTextElement
            (pBVar7,&stack0x000001f8 + iVar2,*(undefined4 *)(&stack0x00000010 + iVar2),0xffffffff);
  pSVar9 = *(ScreenElement **)(&stack0x0000000c + iVar2);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(&stack0x0000000c + iVar2);
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String((String *)(&stack0x000001f8 + iVar2));
  iVar3 = **(int **)(this + 0x70);
  *(int **)(&stack0x0000000c + iVar2) = *(int **)(this + 0x70);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(iVar3 + 0x14);
  *(undefined4 *)(&stack0x0000001c + iVar2) = *(undefined4 *)(*(int *)(this + 100) + 0xc);
  uVar4 = SmDev();
  *(undefined4 *)(&stack0x00000014 + iVar2) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(&stack0x0000001c + iVar2));
  *(undefined4 *)(&stack0x0000001c + iVar2) = uVar4;
  uVar4 = __mulsf3(*(undefined4 *)(&stack0x00000018 + iVar2),DAT_001d5e98);
  __addsf3(*(undefined4 *)(&stack0x0000001c + iVar2),uVar4);
  uVar4 = __fixsfsi();
  (**(code **)(&stack0x00000010 + iVar2))
            (*(undefined4 *)(&stack0x0000000c + iVar2),uVar4,
             *(int *)(DAT_001d5e9c + *(int *)(&stack0x00000014 + iVar2) * 4 + 0x1d5d16) +
             *(int *)(this + 8));
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(this + 8);
  iVar3 = (**(code **)(**(int **)(this + 0x70) + 0x4c))();
  *(int *)(this + 8) = *(int *)(&stack0x0000000c + iVar2) + iVar3;
  *(undefined4 *)(this + 0x90) = 0;
  this[0x88] = (QuestOrder)0x0;
  iVar3 = Quest::isQuestCompleted(*(Quest **)(iVar13 + 0x40),**(int **)(this + 0x8c));
  if (iVar3 != 0) {
    pCVar8 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(param_1 + 0x60) + DAT_001d5ea0),0xb,false);
    this_01 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
    *(ZCImageButton **)(&stack0x0000000c + iVar2) = this_01;
    *puVar21 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    ZCImageButton::ZCImageButton
              (this_01,'!',pCVar8,(CImage *)0x0,*piVar22,*(int *)(&stack0xfffffff0 + iVar2),
               (bool)(&stack0xfffffff4)[iVar2]);
    pSVar9 = *(ScreenElement **)(&stack0x0000000c + iVar2);
    *(ScreenElement **)(this + 0x90) = pSVar9;
    ScreenElement::addChild((ScreenElement *)this,pSVar9);
    piVar11 = *(int **)(this + 0x90);
    *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
    iVar3 = SmDev();
    *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(DAT_001d5ea4 + iVar3 * 4 + 0x1d5d6c)
    ;
    iVar3 = SmDev();
    (**(code **)(&stack0x0000000c + iVar2))
              (piVar11,*(undefined4 *)(&stack0x00000018 + iVar2),
               *(undefined4 *)(DAT_001d5ea8 + iVar3 * 4 + 0x1d5d96));
    *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(**(int **)(this + 0x90) + 0x2c);
    Vector<String>::elementAt((int)(&stack0x00000200 + iVar2));
    iVar3 = SmDev();
    *(undefined4 *)(&stack0x00000018 + iVar2) =
         *(undefined4 *)((*(int *)(DAT_001d5eb0 + iVar3 * 4 + 0x1d5dd0) + 0x136) * 4 + iVar13);
    iVar3 = *(int *)(this + 0x90);
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(&stack0x00000014 + iVar2) = uVar4;
    pBVar7 = (BitmapTextElement *)operator_new(0xc0);
    uVar10 = *(undefined4 *)(&stack0x00000010 + iVar2);
    uVar4 = *(undefined4 *)(&stack0x00000014 + iVar2);
    *puVar23 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = uVar10;
    *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
    *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
    *(undefined4 *)((int)&uStack_4 + iVar2) = uVar4;
    *(undefined4 *)(&stack0x00000000 + iVar2) = 9;
    BitmapTextElement::BitmapTextElement
              (pBVar7,&stack0x00000200 + iVar2,*(undefined4 *)(&stack0x00000018 + iVar2),0xffffffff)
    ;
    *(BitmapTextElement **)(this + 0x7c) = pBVar7;
    (**(code **)(&stack0x0000000c + iVar2))(iVar3,pBVar7);
    String::~String((String *)(&stack0x00000200 + iVar2));
    *(undefined1 *)(*(int *)(this + 0x7c) + 0x7f) = 0x12;
    this[0x88] = (QuestOrder)0x1;
  }
  ScreenElement::addChild((ScreenElement *)this,*(ScreenElement **)(this + 0x68));
  ScreenElement::addChild((ScreenElement *)this,*(ScreenElement **)(this + 100));
  piVar11 = *(int **)(this + 100);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((int)&DAT_001d5e88 + DAT_001d5eb4 + iVar3 * 4);
  iVar3 = SmDev();
  (**(code **)(&stack0x0000000c + iVar2))
            (piVar11,uVar4,*(int *)(DAT_001d5eb8 + iVar3 * 4 + 0x1d5e7c) + *(int *)(this + 8));
  piVar11 = *(int **)(this + 0x68);
  pcVar14 = *(code **)(*piVar11 + 0x14);
  iVar3 = SmDev();
  (*pcVar14)(piVar11,*(undefined4 *)((int)&DAT_001d5eb4 + DAT_001d5ebc + iVar3 * 4),
             *(undefined4 *)(this + 8));
  iVar12 = *(int *)(this + 8);
  iVar3 = SmDev();
  iVar13 = *(int *)(&stack0x00000020 + iVar2);
  iVar12 = iVar12 + *(int *)(DAT_001d5ec0 + iVar3 * 4 + 0x1d5e6a);
  *(int *)(this + 8) = iVar12;
  ScreenElement::setSize((ScreenElement *)this,iVar13,iVar12);
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000208 + iVar2));
  if (*(int *)(&stack0x00000340 + iVar2) != **(int **)(iVar15 + DAT_001d5ec4)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


