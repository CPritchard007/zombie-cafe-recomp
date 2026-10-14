/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018aae0 GameStateRoulette::selectCharacter */

/* GameStateRoulette::selectCharacter(int) */

void __thiscall GameStateRoulette::selectCharacter(GameStateRoulette *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  short sVar3;
  TrueTypeTextElement *pTVar4;
  void *pvVar5;
  CImage *pCVar6;
  ImageElement *this_00;
  short extraout_r1;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  Character *pCVar16;
  int iVar17;
  undefined4 *puVar18;
  float __x;
  float __x_00;
  float extraout_s0;
  float fVar24;
  undefined4 uStack_4;
  undefined4 *puVar19;
  int *piVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  
  iVar2 = DAT_0018ac50;
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_0018ac50);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_0018ac50);
  piVar20 = (int *)(&stack0xffffffec + DAT_0018ac50);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_0018ac50);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_0018ac50);
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_0018ac50);
  *(int *)(&stack0x0000000c + DAT_0018ac50) = param_1;
  iVar17 = DAT_0018ac54 + 0x18aaf0;
  puVar14 = *(undefined4 **)(iVar17 + DAT_0018ac58);
  pcVar12 = (char *)(DAT_0018ac5c + 0x18aafa);
  *(undefined4 *)(&stack0x000002d8 + DAT_0018ac50) = *puVar14;
  L_PrintLog(pcVar12,(char *)(DAT_0018ac60 + 0x18aafe));
  unSelectCharacter(this);
  *(undefined4 **)(&stack0x00000014 + iVar2) = puVar14;
  iVar8 = *(int *)(this + (*(int *)(&stack0x0000000c + iVar2) + 0x24) * 4 + 4);
  *(int *)(this + 0x2c) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)(this + 0x28) = 0xffffffff;
    FUN_0018b61e();
  }
  L_PrintLog(pcVar12,(char *)(DAT_0018ac64 + 0x18ab2e));
  iVar8 = DAT_0018ac68;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(&stack0x0000000c + iVar2);
  String::String((String *)(&stack0x00000020 + iVar2),
                 (String *)(**(int **)(*(int *)(this + 0x2c) + 0x8c) + iVar8));
  piVar13 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar13 + 0x2c);
  String::String((String *)(&stack0x00000028 + iVar2),(String *)(&stack0x00000020 + iVar2));
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  puVar14 = *(undefined4 **)(iVar17 + DAT_0018ac6c);
  uVar9 = *puVar14;
  *puVar18 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 2;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0x11;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  *(undefined4 **)(&stack0x00000018 + iVar2) = puVar14;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000028 + iVar2,*(undefined4 *)(this + 0x18),uVar9);
  *(TrueTypeTextElement **)(this + 0x30) = pTVar4;
  (**(code **)(&stack0x0000000c + iVar2))(piVar13,pTVar4);
  String::~String((String *)(&stack0x00000028 + iVar2));
  piVar13 = *(int **)(iVar17 + DAT_0018ac70);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0x30));
  L_PrintLog((char *)(DAT_0018ac74 + 0x18abaa),(char *)(DAT_0018ac78 + 0x18abac));
  sprintf(&stack0x000001d8 + iVar2,(char *)(DAT_0018ac7c + 0x18abba),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_0018ac80 + 0x18abc6),&stack0x000001d8 + iVar2);
  piVar15 = *(int **)(this + 0x30);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar15 + 0x14);
  iVar8 = SmDev();
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(DAT_0018ac84 + iVar8 * 4 + 0x18ac14);
  iVar8 = SmDev();
  (**(code **)(&stack0x0000000c + iVar2))
            (piVar15,*(undefined4 *)(&stack0x00000010 + iVar2),
             *(undefined4 *)(DAT_0018ac88 + iVar8 * 4 + 0x18ac3e));
  String::String((String *)(&stack0x00000030 + iVar2));
  iVar8 = **(int **)(*(int *)(this + 0x2c) + 0x8c);
  iVar10 = (int)*(short *)(iVar8 + DAT_0018ac90);
  if (((**(int **)(iVar17 + DAT_0018ac8c) == iVar10) ||
      (**(int **)(iVar17 + DAT_0018ac94) == iVar10)) ||
     ((*(int **)(iVar17 + DAT_0018ac94))[1] == iVar10)) {
    String::String((String *)(&stack0x00000038 + iVar2),(String *)(iVar8 + DAT_0018ac98));
    String::operator=((String *)(&stack0x00000030 + iVar2),&stack0x00000038 + iVar2);
    String::~String((String *)(&stack0x00000038 + iVar2));
    String::String((String *)(&stack0x00000040 + iVar2),(char *)(DAT_0018ac9c + 0x18ac42));
    String::operator+=((String *)(&stack0x00000030 + iVar2),&stack0x00000040 + iVar2);
    puVar1 = &stack0x00000040;
  }
  else {
    String::String((String *)(&stack0x00000048 + iVar2),(String *)(iVar8 + DAT_0018b05c));
    String::operator=((String *)(&stack0x00000030 + iVar2),&stack0x00000048 + iVar2);
    puVar1 = &stack0x00000048;
  }
  String::~String((String *)(puVar1 + iVar2));
  ZombieCafe::getSpecialAttackUnit
            (*(ZombieCafe **)(this + 0xc),
             (uint)*(ushort *)(**(int **)(*(int *)(this + 0x2c) + 0x8c) + DAT_0018b060));
  String::String((String *)(&stack0x00000050 + iVar2),(char *)(DAT_0018b064 + 0x18acd2));
  iVar8 = SmDev();
  MultiByteString::insertStringNextLine
            ((String *)(&stack0x00000050 + iVar2),(String *)(&stack0x00000030 + iVar2),
             *(int *)(DAT_0018b068 + iVar8 * 4 + 0x18acee));
  piVar15 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar15 + 0x2c);
  String::String((String *)(&stack0x00000058 + iVar2),(String *)(&stack0x00000050 + iVar2));
  pvVar5 = operator_new(0xe4);
  *(void **)(&stack0x0000000c + iVar2) = pvVar5;
  uVar9 = *(undefined4 *)(this + 0x18);
  uVar11 = **(undefined4 **)(&stack0x00000018 + iVar2);
  *puVar19 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x14;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 9;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (*(TrueTypeTextElement **)(&stack0x0000000c + iVar2),&stack0x00000058 + iVar2,uVar9,
             uVar11);
  pcVar7 = *(code **)(&stack0x00000010 + iVar2);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(&stack0x0000000c + iVar2);
  (*pcVar7)(piVar15);
  String::~String((String *)(&stack0x00000058 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0x34));
  L_PrintLog((char *)(DAT_0018b06c + 0x18ad46),(char *)(DAT_0018b070 + 0x18ad48));
  sprintf(&stack0x000001d8 + iVar2,(char *)(DAT_0018b074 + 0x18ad56),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_0018b078 + 0x18ad62),&stack0x000001d8 + iVar2);
  piVar13 = *(int **)(this + 0x34);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar13 + 0x14);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)(DAT_0018b07c + iVar8 * 4 + 0x18ade0);
  iVar8 = SmDev();
  (**(code **)(&stack0x0000000c + iVar2))
            (piVar13,uVar9,*(undefined4 *)(iVar8 * 4 + DAT_0018b080 + 0x18ad88));
  L_PrintLog((char *)(DAT_0018b084 + 0x18ad96),(char *)(DAT_0018b088 + 0x18ad98));
  pcVar12 = (char *)(DAT_0018b08c + 0x18ada6);
  iVar8 = (int)*(short *)(**(int **)(*(int *)(this + 0x2c) + 0x8c) + DAT_0018b090);
  *(int *)(&stack0x0000000c + iVar2) = iVar8;
  sVar3 = __divsi3(iVar8,0x3c);
  __aeabi_idivmod(*(undefined4 *)(&stack0x0000000c + iVar2),0x3c);
  *piVar20 = (int)extraout_r1;
  snprintf(&stack0x00000158 + iVar2,0x80,pcVar12,(int)sVar3);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000120 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000060 + iVar2));
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x00000060 + iVar2);
  String::~String((String *)(&stack0x00000060 + iVar2));
  String::valueOf((int)(&stack0x00000068 + iVar2));
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x00000068 + iVar2);
  String::~String((String *)(&stack0x00000068 + iVar2));
  String::String((String *)(&stack0x00000070 + iVar2),(char *)(DAT_0018b09c + 0x18ae2e));
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x00000070 + iVar2);
  String::~String((String *)(&stack0x00000070 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000078 + iVar2));
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x00000078 + iVar2);
  String::~String((String *)(&stack0x00000078 + iVar2));
  pCVar16 = *(Character **)(*(int *)(this + 0x2c) + 0x8c);
  sVar3 = *(short *)(*(int *)pCVar16 + DAT_0018b0a4);
  uVar9 = Character::getRareValue(pCVar16);
  *(undefined4 *)(&stack0x0000000c + iVar2) = uVar9;
  uVar9 = __floatsisf((int)sVar3);
  uVar9 = __mulsf3(uVar9,*(undefined4 *)
                          (DAT_0018b0a8 +
                           *(int *)(&stack0x0000000c + iVar2) * 0xe10 +
                           *(int *)(pCVar16 + 0x28) * 0xc + 0x18ae9c));
  roundf(__x);
  *(undefined4 *)(&stack0x0000000c + iVar2) = uVar9;
  iVar8 = Character::getRareValue(pCVar16);
  iVar10 = Character::getSameZombiePowerupNum(pCVar16);
  __addsf3(*(undefined4 *)(&stack0x0000000c + iVar2),
           *(undefined4 *)(DAT_0018b0ac + iVar10 * 0xc + iVar8 * 0x3c + 0x18af38));
  __fixsfsi();
  String::valueOf((int)(&stack0x00000080 + iVar2));
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x00000080 + iVar2);
  String::~String((String *)(&stack0x00000080 + iVar2));
  String::String((String *)(&stack0x00000088 + iVar2),(char *)(DAT_0018b0b0 + 0x18aef0));
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x00000088 + iVar2);
  String::~String((String *)(&stack0x00000088 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000090 + iVar2));
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x00000090 + iVar2);
  String::~String((String *)(&stack0x00000090 + iVar2));
  String::String((String *)(&stack0x00000098 + iVar2),&stack0x00000158 + iVar2);
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x00000098 + iVar2);
  String::~String((String *)(&stack0x00000098 + iVar2));
  String::String((String *)(&stack0x000000a0 + iVar2),(char *)(DAT_0018b0b8 + 0x18af40));
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x000000a0 + iVar2);
  String::~String((String *)(&stack0x000000a0 + iVar2));
  String::String((String *)(&stack0x000000a8 + iVar2),(char *)(DAT_0018b0bc + 0x18af58));
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x000000a8 + iVar2);
  String::~String((String *)(&stack0x000000a8 + iVar2));
  String::String((String *)(&stack0x000000b0 + iVar2),(char *)(DAT_0018b0c0 + 0x18af70));
  StringBuffer::append(&stack0x00000120 + iVar2,&stack0x000000b0 + iVar2);
  String::~String((String *)(&stack0x000000b0 + iVar2));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x0000013c + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000b8 + iVar2));
  StringBuffer::append(&stack0x0000013c + iVar2,&stack0x000000b8 + iVar2);
  String::~String((String *)(&stack0x000000b8 + iVar2));
  pCVar16 = *(Character **)(*(int *)(this + 0x2c) + 0x8c);
  sVar3 = *(short *)(*(int *)pCVar16 + DAT_0018b0c8);
  uVar9 = Character::getRareValue(pCVar16);
  *(undefined4 *)(&stack0x0000000c + iVar2) = uVar9;
  uVar9 = __floatsisf((int)sVar3);
  uVar9 = __mulsf3(uVar9,*(undefined4 *)
                          (DAT_0018b0cc +
                           *(int *)(pCVar16 + 0x28) * 0xc +
                           *(int *)(&stack0x0000000c + iVar2) * 0xe10 + 0x18afea));
  roundf(__x_00);
  uVar11 = Character::getRareValue(pCVar16);
  *(undefined4 *)(&stack0x0000000c + iVar2) = uVar11;
  iVar8 = Character::getSameZombiePowerupNum(pCVar16);
  __fixsfsi(uVar9);
  __fixsfsi(*(undefined4 *)
             ((int)&DAT_0018b090 +
             DAT_0018b0d0 + iVar8 * 0xc + *(int *)(&stack0x0000000c + iVar2) * 0x3c));
  String::valueOf((int)(&stack0x000000c0 + iVar2));
  StringBuffer::append(&stack0x0000013c + iVar2,&stack0x000000c0 + iVar2);
  String::~String((String *)(&stack0x000000c0 + iVar2));
  String::String((String *)(&stack0x000000c8 + iVar2),(char *)(DAT_0018b0d4 + 0x18b040));
  StringBuffer::append(&stack0x0000013c + iVar2,&stack0x000000c8 + iVar2);
  String::~String((String *)(&stack0x000000c8 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000d0 + iVar2));
  StringBuffer::append(&stack0x0000013c + iVar2,&stack0x000000d0 + iVar2);
  String::~String((String *)(&stack0x000000d0 + iVar2));
  String::valueOf((int)(&stack0x000000d8 + iVar2));
  StringBuffer::append(&stack0x0000013c + iVar2,&stack0x000000d8 + iVar2);
  String::~String((String *)(&stack0x000000d8 + iVar2));
  String::String((String *)(&stack0x000000e0 + iVar2),(char *)(DAT_0018b488 + 0x18b11a));
  StringBuffer::append(&stack0x0000013c + iVar2,&stack0x000000e0 + iVar2);
  String::~String((String *)(&stack0x000000e0 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000e8 + iVar2));
  StringBuffer::append(&stack0x0000013c + iVar2,&stack0x000000e8 + iVar2);
  String::~String((String *)(&stack0x000000e8 + iVar2));
  Character::getMaxEnergy();
  __fixsfsi();
  String::valueOf((int)(&stack0x000000f0 + iVar2));
  StringBuffer::append(&stack0x0000013c + iVar2,&stack0x000000f0 + iVar2);
  String::~String((String *)(&stack0x000000f0 + iVar2));
  String::String((String *)(&stack0x000000f8 + iVar2),(char *)(DAT_0018b490 + 0x18b178));
  StringBuffer::append(&stack0x0000013c + iVar2,&stack0x000000f8 + iVar2);
  String::~String((String *)(&stack0x000000f8 + iVar2));
  piVar13 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar13 + 0x2c);
  StringBuffer::toString();
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar21 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000100 + iVar2,*(undefined4 *)(this + 0x1c),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x38) = pTVar4;
  (**(code **)(&stack0x0000000c + iVar2))(piVar13,pTVar4);
  String::~String((String *)(&stack0x00000100 + iVar2));
  piVar13 = *(int **)(iVar17 + DAT_0018b494);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0x38));
  L_PrintLog((char *)(DAT_0018b498 + 0x18b1de),(char *)(DAT_0018b49c + 0x18b1e0));
  sprintf(&stack0x000001d8 + iVar2,(char *)(DAT_0018b4a0 + 0x18b1ee),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_0018b4a4 + 0x18b1fa),&stack0x000001d8 + iVar2);
  piVar15 = *(int **)(this + 0x38);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar15 + 0x14);
  iVar8 = SmDev();
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(DAT_0018b4a8 + iVar8 * 4 + 0x18b228);
  iVar8 = SmDev();
  (**(code **)(&stack0x0000000c + iVar2))
            (piVar15,*(undefined4 *)(&stack0x00000010 + iVar2),
             *(undefined4 *)(DAT_0018b4ac + iVar8 * 4 + 0x18b26a));
  piVar15 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar15 + 0x2c);
  StringBuffer::toString();
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar22 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  uVar9 = *(undefined4 *)(this + 0x1c);
  *(TrueTypeTextElement **)(&stack0x0000000c + iVar2) = pTVar4;
  TrueTypeTextElement::TrueTypeTextElement(pTVar4,&stack0x00000108 + iVar2,uVar9,0xffffffff);
  uVar9 = *(undefined4 *)(&stack0x0000000c + iVar2);
  pcVar7 = *(code **)(&stack0x00000010 + iVar2);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(&stack0x0000000c + iVar2);
  (*pcVar7)(piVar15,uVar9);
  String::~String((String *)(&stack0x00000108 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0x3c));
  L_PrintLog((char *)(DAT_0018b4b0 + 0x18b27e),(char *)(DAT_0018b4b4 + 0x18b280));
  sprintf(&stack0x000001d8 + iVar2,(char *)(DAT_0018b4b8 + 0x18b28e),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_0018b4bc + 0x18b29a),&stack0x000001d8 + iVar2);
  piVar15 = *(int **)(this + 0x3c);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar15 + 0x14);
  iVar8 = SmDev();
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(DAT_0018b4c0 + iVar8 * 4 + 0x18b2e0);
  iVar8 = SmDev();
  (**(code **)(&stack0x0000000c + iVar2))
            (piVar15,*(undefined4 *)(&stack0x00000010 + iVar2),
             *(undefined4 *)(DAT_0018b4c4 + iVar8 * 4 + 0x18b30a));
  L_PrintLog((char *)(DAT_0018b4c8 + 0x18b2d2),(char *)(DAT_0018b4cc + 0x18b2d4));
  String::String((String *)(&stack0x00000110 + iVar2),
                 (String *)
                 (DAT_0018b4d0 + 0x18b304 +
                 (uint)*(byte *)(*(int *)(*(int *)(this + 0x2c) + 0x8c) + 0x36) * 0x24));
  piVar15 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar15 + 0x2c);
  String::String((String *)(&stack0x00000118 + iVar2),(String *)(&stack0x00000110 + iVar2));
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *(TrueTypeTextElement **)(&stack0x0000000c + iVar2) = pTVar4;
  uVar9 = *(undefined4 *)(this + 0x18);
  uVar11 = **(undefined4 **)(iVar17 + DAT_0018b4d4);
  *puVar23 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement(pTVar4,&stack0x00000118 + iVar2,uVar9,uVar11);
  uVar9 = *(undefined4 *)(&stack0x0000000c + iVar2);
  pcVar7 = *(code **)(&stack0x00000010 + iVar2);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(&stack0x0000000c + iVar2);
  (*pcVar7)(piVar15,uVar9);
  String::~String((String *)(&stack0x00000118 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0x40));
  L_PrintLog((char *)(DAT_0018b4d8 + 0x18b348),(char *)(DAT_0018b4dc + 0x18b34a));
  sprintf(&stack0x000001d8 + iVar2,(char *)(DAT_0018b4e0 + 0x18b358),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_0018b4e4 + 0x18b364),&stack0x000001d8 + iVar2);
  piVar13 = *(int **)(this + 0x40);
  pcVar7 = *(code **)(*piVar13 + 0x14);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)(DAT_0018b4e8 + iVar8 * 4 + 0x18b3d8);
  iVar8 = SmDev();
  (*pcVar7)(piVar13,uVar9,*(undefined4 *)(DAT_0018b4ec + iVar8 * 4 + 0x18b400));
  if (*(int *)(this + 0x74) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x74) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x74) + 100) + 4))();
    }
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
  }
  iVar8 = Character::getRareValueIconIdx(*(Character **)(*(int *)(this + 0x2c) + 0x8c));
  fVar24 = extraout_s0;
  if (iVar8 != -1) {
    piVar13 = *(int **)(this + 0x14);
    iVar17 = *(int *)(this + 0xc);
    *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar13 + 0x2c);
    pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar17 + DAT_0018b4f0),iVar8,false);
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_00,pCVar6,'\t',true);
    *(ImageElement **)(this + 0x74) = this_00;
    (**(code **)(&stack0x0000000c + iVar2))(piVar13,this_00);
    iVar8 = *(int *)(this + 0x58);
    fVar24 = (float)(**(code **)(**(int **)(this + 0x74) + 0x14))
                              (*(int **)(this + 0x74),
                               (*(int *)(iVar8 + 4) - *(int *)(iVar8 + 0xc) / 2) + 0x14,
                               (*(int *)(iVar8 + 8) - *(int *)(iVar8 + 0x10) / 2) + 0x14);
  }
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar24);
  L_PrintLog((char *)(DAT_0018b4f4 + 0x18b434),(char *)(DAT_0018b4f8 + 0x18b436));
  String::~String((String *)(&stack0x00000110 + iVar2));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x0000013c + iVar2));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000120 + iVar2));
  String::~String((String *)(&stack0x00000050 + iVar2));
  String::~String((String *)(&stack0x00000030 + iVar2));
  String::~String((String *)(&stack0x00000020 + iVar2));
  FUN_0018b61e();
  return;
}


