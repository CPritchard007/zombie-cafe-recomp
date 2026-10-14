/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017b0f4 GameStatePowerup::selectCharacter */

/* GameStatePowerup::selectCharacter(int) */

void __thiscall GameStatePowerup::selectCharacter(GameStatePowerup *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  short sVar3;
  TrueTypeTextElement *pTVar4;
  undefined4 uVar5;
  CImage *pCVar6;
  ImageElement *pIVar7;
  short extraout_r1;
  GameStatePowerup *pGVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  char *__format;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined8 uVar21;
  int iStack_4;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  
  iVar2 = DAT_0017b2c0;
  iVar12 = DAT_0017b2b8 + 0x17b100;
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_0017b2c0);
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_0017b2c0);
  piVar17 = (int *)(&stack0xffffffec + DAT_0017b2c0);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_0017b2c0);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_0017b2c0);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_0017b2c0);
  *(undefined4 *)(&stack0x000002f8 + DAT_0017b2c0) = **(undefined4 **)(iVar12 + DAT_0017b2bc);
  unSelectCharacter(this);
  iVar10 = *(int *)(this + (param_1 + 0x44) * 4 + 4);
  *(int *)(this + 0x20) = param_1;
  *(int *)(this + 0x24) = iVar10;
  iVar9 = 0;
  pGVar8 = this;
  do {
    if (*(int *)(pGVar8 + 0x4d0) == iVar10) {
      *(undefined4 *)(this + (iVar9 + 0x134) * 4) = 0;
      *(int *)(this + 0x4f8) = *(int *)(this + 0x4f8) + -1;
      iVar9 = 1;
      goto LAB_0017b150;
    }
    iVar9 = iVar9 + 1;
    pGVar8 = pGVar8 + 4;
  } while (iVar9 != 10);
  iVar9 = 0;
LAB_0017b150:
  if ((*(char *)(*(int *)(iVar10 + 0x8c) + 0x34) == '\0') && (pGVar8 = this, iVar9 == 0)) {
    do {
      if (*(int *)(pGVar8 + 0x4d0) == 0) {
        *(int *)(this + (iVar9 + 0x134) * 4) = iVar10;
        *(int *)(this + 0x4f8) = *(int *)(this + 0x4f8) + 1;
        break;
      }
      iVar9 = iVar9 + 1;
      pGVar8 = pGVar8 + 4;
    } while (iVar9 != 10);
  }
  String::String((String *)(&stack0x00000010 + iVar2),(String *)(*(int *)(iVar10 + 0x8c) + 8));
  piVar11 = *(int **)(this + 0x14);
  *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(*piVar11 + 0x2c);
  String::String((String *)(&stack0x00000018 + iVar2),(String *)(&stack0x00000010 + iVar2));
  iVar9 = SmDev();
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(DAT_0017b2c4 + iVar9 * 4 + 0x17b1fe);
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar15 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000018 + iVar2,*(undefined4 *)(this + 0x1c),
             *(undefined4 *)(&stack0x00000000 + iVar2));
  *(TrueTypeTextElement **)(this + 0x28) = pTVar4;
  (**(code **)((int)&iStack_4 + iVar2))(piVar11,pTVar4);
  String::~String((String *)(&stack0x00000018 + iVar2));
  piVar11 = *(int **)(iVar12 + DAT_0017b2c8);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x28));
  L_PrintLog((char *)(DAT_0017b2cc + 0x17b1fa),(char *)(DAT_0017b2d0 + 0x17b1fc));
  sprintf(&stack0x000001f8 + iVar2,(char *)(DAT_0017b2d4 + 0x17b20a),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_0017b2d8 + 0x17b216),&stack0x000001f8 + iVar2);
  piVar13 = *(int **)(this + 0x28);
  *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(*piVar13 + 0x14);
  iVar9 = SmDev();
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(DAT_0017b2dc + iVar9 * 4 + 0x17b290);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(this + 0x530);
  uVar5 = SmDev();
  *(undefined4 *)(&stack0x00000008 + iVar2) = uVar5;
  uVar5 = __floatsisf(*(undefined4 *)(&stack0x00000000 + iVar2));
  __mulsf3(uVar5,*(undefined4 *)(&stack0x00000004 + iVar2));
  uVar5 = __fixsfsi();
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar5;
  uVar5 = __floatsisf(*(undefined4 *)
                       ((int)&DAT_0017b2d4 +
                       DAT_0017b2e0 + *(int *)(&stack0x00000008 + iVar2) * 4 + 2));
  __mulsf3(uVar5,*(undefined4 *)(this + DAT_0017b2e4));
  uVar5 = __fixsfsi();
  (**(code **)((int)&iStack_4 + iVar2))(piVar13,*(undefined4 *)(&stack0x00000000 + iVar2),uVar5);
  String::String((String *)(&stack0x00000020 + iVar2));
  iVar9 = **(int **)(*(int *)(this + 0x24) + 0x8c);
  iVar10 = (int)*(short *)(iVar9 + DAT_0017b2ec);
  if (((**(int **)(iVar12 + DAT_0017b2e8) == iVar10) ||
      (**(int **)(iVar12 + DAT_0017b2f0) == iVar10)) ||
     ((*(int **)(iVar12 + DAT_0017b2f0))[1] == iVar10)) {
    String::String((String *)(&stack0x00000028 + iVar2),(String *)(iVar9 + DAT_0017b2f4));
    String::operator=((String *)(&stack0x00000020 + iVar2),&stack0x00000028 + iVar2);
    puVar1 = &stack0x00000028;
  }
  else {
    String::String((String *)(&stack0x00000030 + iVar2),(String *)(iVar9 + DAT_0017b6b4));
    String::operator=((String *)(&stack0x00000020 + iVar2),&stack0x00000030 + iVar2);
    puVar1 = &stack0x00000030;
  }
  String::~String((String *)(puVar1 + iVar2));
  String::String((String *)(&stack0x00000038 + iVar2),(char *)(DAT_0017b6b8 + 0x17b318));
  iVar9 = SmDev();
  MultiByteString::insertStringNextLine
            ((String *)(&stack0x00000038 + iVar2),(String *)(&stack0x00000020 + iVar2),
             *(int *)(DAT_0017b6bc + iVar9 * 4 + 0x17b33c));
  piVar13 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar13 + 0x2c);
  String::String((String *)(&stack0x00000040 + iVar2),(String *)(&stack0x00000038 + iVar2));
  iVar9 = SmDev();
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(DAT_0017b6c0 + iVar9 * 4 + 0x17b398);
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar16 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  uVar5 = *(undefined4 *)(this + 0x18);
  *(TrueTypeTextElement **)((int)&iStack_4 + iVar2) = pTVar4;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000040 + iVar2,uVar5,*(undefined4 *)(&stack0x00000004 + iVar2));
  uVar5 = *(undefined4 *)((int)&iStack_4 + iVar2);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)((int)&iStack_4 + iVar2);
  (**(code **)(&stack0x00000000 + iVar2))(piVar13,uVar5);
  String::~String((String *)(&stack0x00000040 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x2c));
  L_PrintLog((char *)(DAT_0017b6c4 + 0x17b392),(char *)(DAT_0017b6c8 + 0x17b394));
  sprintf(&stack0x000001f8 + iVar2,(char *)(DAT_0017b6cc + 0x17b3a2),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_0017b6d0 + 0x17b3ae),&stack0x000001f8 + iVar2);
  piVar11 = *(int **)(this + 0x2c);
  *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
  iVar9 = SmDev();
  uVar14 = *(undefined4 *)(DAT_0017b6d4 + iVar9 * 4 + 0x17b3f0);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(this + 0x530);
  uVar5 = SmDev();
  *(undefined4 *)(&stack0x00000004 + iVar2) = uVar5;
  __mulsf3(uVar14,*(undefined4 *)(&stack0x00000000 + iVar2));
  uVar5 = __fixsfsi();
  uVar14 = __mulsf3(*(undefined4 *)
                     (DAT_0017b6d8 + *(int *)(&stack0x00000004 + iVar2) * 4 + 0x17b430),
                    *(undefined4 *)(this + DAT_0017b6dc));
  __addsf3(uVar14,DAT_0017b6e0);
  uVar14 = __fixsfsi();
  (**(code **)((int)&iStack_4 + iVar2))(piVar11,uVar5,uVar14);
  __format = (char *)(DAT_0017b6e4 + 0x17b418);
  iVar9 = (int)*(short *)(**(int **)(*(int *)(this + 0x24) + 0x8c) + DAT_0017b6e8);
  *(int *)((int)&iStack_4 + iVar2) = iVar9;
  sVar3 = __divsi3(iVar9,0x3c);
  __aeabi_idivmod(*(undefined4 *)((int)&iStack_4 + iVar2),0x3c);
  *piVar17 = (int)extraout_r1;
  snprintf(&stack0x00000178 + iVar2,0x80,__format,(int)sVar3);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000140 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000048 + iVar2));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000048 + iVar2);
  String::~String((String *)(&stack0x00000048 + iVar2));
  String::String((String *)(&stack0x00000050 + iVar2),(char *)(DAT_0017b6f0 + 0x17b472));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000050 + iVar2);
  String::~String((String *)(&stack0x00000050 + iVar2));
  String::valueOf((int)(&stack0x00000058 + iVar2));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000058 + iVar2);
  String::~String((String *)(&stack0x00000058 + iVar2));
  String::String((String *)(&stack0x00000060 + iVar2),(char *)(DAT_0017b6f4 + 0x17b4a6));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000060 + iVar2);
  String::~String((String *)(&stack0x00000060 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000068 + iVar2));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000068 + iVar2);
  String::~String((String *)(&stack0x00000068 + iVar2));
  Character::getAdditionCharisma(*(Character **)(*(int *)(this + 0x24) + 0x8c));
  String::valueOf((int)(&stack0x00000070 + iVar2));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000070 + iVar2);
  String::~String((String *)(&stack0x00000070 + iVar2));
  String::String((String *)(&stack0x00000078 + iVar2),(char *)(DAT_0017b700 + 0x17b510));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000078 + iVar2);
  String::~String((String *)(&stack0x00000078 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000080 + iVar2));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000080 + iVar2);
  String::~String((String *)(&stack0x00000080 + iVar2));
  Character::getAttackPower();
  String::valueOf((int)(&stack0x00000088 + iVar2));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000088 + iVar2);
  String::~String((String *)(&stack0x00000088 + iVar2));
  String::String((String *)(&stack0x00000090 + iVar2),(char *)(DAT_0017b708 + 0x17b566));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000090 + iVar2);
  String::~String((String *)(&stack0x00000090 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000098 + iVar2));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x00000098 + iVar2);
  String::~String((String *)(&stack0x00000098 + iVar2));
  String::String((String *)(&stack0x000000a0 + iVar2),&stack0x00000178 + iVar2);
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x000000a0 + iVar2);
  String::~String((String *)(&stack0x000000a0 + iVar2));
  String::String((String *)(&stack0x000000a8 + iVar2),(char *)(DAT_0017b710 + 0x17b5b6));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x000000a8 + iVar2);
  String::~String((String *)(&stack0x000000a8 + iVar2));
  String::String((String *)(&stack0x000000b0 + iVar2),(char *)(DAT_0017b714 + 0x17b5ce));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x000000b0 + iVar2);
  String::~String((String *)(&stack0x000000b0 + iVar2));
  String::String((String *)(&stack0x000000b8 + iVar2),(char *)(DAT_0017b718 + 0x17b5e6));
  StringBuffer::append(&stack0x00000140 + iVar2,&stack0x000000b8 + iVar2);
  String::~String((String *)(&stack0x000000b8 + iVar2));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x0000015c + iVar2));
  String::String((String *)(&stack0x000000c0 + iVar2),(char *)(DAT_0017b71c + 0x17b604));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x000000c0 + iVar2);
  String::~String((String *)(&stack0x000000c0 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000c8 + iVar2));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x000000c8 + iVar2);
  String::~String((String *)(&stack0x000000c8 + iVar2));
  Character::getSpeedParam();
  String::valueOf((int)(&stack0x000000d0 + iVar2));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x000000d0 + iVar2);
  String::~String((String *)(&stack0x000000d0 + iVar2));
  String::String((String *)(&stack0x000000d8 + iVar2),(char *)(DAT_0017b724 + 0x17b65a));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x000000d8 + iVar2);
  String::~String((String *)(&stack0x000000d8 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000e0 + iVar2));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x000000e0 + iVar2);
  String::~String((String *)(&stack0x000000e0 + iVar2));
  Character::getAdditionFocus(*(Character **)(*(int *)(this + 0x24) + 0x8c));
  String::valueOf((int)(&stack0x000000e8 + iVar2));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x000000e8 + iVar2);
  String::~String((String *)(&stack0x000000e8 + iVar2));
  String::String((String *)(&stack0x000000f0 + iVar2),(char *)(DAT_0017baf0 + 0x17b738));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x000000f0 + iVar2);
  String::~String((String *)(&stack0x000000f0 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000f8 + iVar2));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x000000f8 + iVar2);
  String::~String((String *)(&stack0x000000f8 + iVar2));
  __fixsfsi(*(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 0x40));
  String::valueOf((int)(&stack0x00000100 + iVar2));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x00000100 + iVar2);
  String::~String((String *)(&stack0x00000100 + iVar2));
  String::String((String *)(&stack0x00000108 + iVar2),(char *)(DAT_0017baf8 + 0x17b794));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x00000108 + iVar2);
  String::~String((String *)(&stack0x00000108 + iVar2));
  Character::getMaxEnergy();
  __fixsfsi();
  String::valueOf((int)(&stack0x00000110 + iVar2));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x00000110 + iVar2);
  String::~String((String *)(&stack0x00000110 + iVar2));
  String::String((String *)(&stack0x00000118 + iVar2),(char *)(DAT_0017bafc + 0x17b7d0));
  StringBuffer::append(&stack0x0000015c + iVar2,&stack0x00000118 + iVar2);
  String::~String((String *)(&stack0x00000118 + iVar2));
  piVar11 = *(int **)(this + 0x14);
  *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(*piVar11 + 0x2c);
  StringBuffer::toString();
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar18 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000120 + iVar2,*(undefined4 *)(this + 0x18),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x30) = pTVar4;
  (**(code **)((int)&iStack_4 + iVar2))(piVar11,pTVar4);
  String::~String((String *)(&stack0x00000120 + iVar2));
  piVar11 = *(int **)(iVar12 + DAT_0017bb00);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x30));
  L_PrintLog((char *)(DAT_0017bb04 + 0x17b836),(char *)(DAT_0017bb08 + 0x17b838));
  sprintf(&stack0x000001f8 + iVar2,(char *)(DAT_0017bb0c + 0x17b846),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_0017bb10 + 0x17b852),&stack0x000001f8 + iVar2);
  piVar13 = *(int **)(this + 0x30);
  *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(*piVar13 + 0x14);
  iVar9 = SmDev();
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(DAT_0017bb14 + iVar9 * 4 + 0x17b8c4);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(this + 0x530);
  uVar5 = SmDev();
  *(undefined4 *)(&stack0x00000008 + iVar2) = uVar5;
  uVar5 = __floatsisf(*(undefined4 *)(&stack0x00000000 + iVar2));
  uVar5 = __mulsf3(uVar5,*(undefined4 *)(&stack0x00000004 + iVar2));
  __subsf3(uVar5,DAT_0017bb18);
  uVar5 = __fixsfsi();
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar5;
  uVar5 = __floatsisf(*(undefined4 *)
                       (DAT_0017bb1c + *(int *)(&stack0x00000008 + iVar2) * 4 + 0x17b910));
  __mulsf3(uVar5,*(undefined4 *)(this + DAT_0017bb20));
  uVar5 = __fixsfsi();
  (**(code **)((int)&iStack_4 + iVar2))(piVar13,*(undefined4 *)(&stack0x00000000 + iVar2),uVar5);
  piVar13 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar13 + 0x2c);
  StringBuffer::toString();
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar19 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  uVar5 = *(undefined4 *)(this + 0x18);
  *(TrueTypeTextElement **)((int)&iStack_4 + iVar2) = pTVar4;
  TrueTypeTextElement::TrueTypeTextElement(pTVar4,&stack0x00000128 + iVar2,uVar5,0xffffffff);
  uVar5 = *(undefined4 *)((int)&iStack_4 + iVar2);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)((int)&iStack_4 + iVar2);
  (**(code **)(&stack0x00000000 + iVar2))(piVar13,uVar5);
  String::~String((String *)(&stack0x00000128 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x34));
  L_PrintLog((char *)(DAT_0017bb24 + 0x17b90c),(char *)(DAT_0017bb28 + 0x17b90e));
  sprintf(&stack0x000001f8 + iVar2,(char *)(DAT_0017bb2c + 0x17b91c),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_0017bb30 + 0x17b928),&stack0x000001f8 + iVar2);
  piVar13 = *(int **)(this + 0x34);
  *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(*piVar13 + 0x14);
  iVar9 = SmDev();
  uVar5 = *(undefined4 *)(this + 0x530);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(DAT_0017bb34 + iVar9 * 4 + 0x17b94a);
  *(undefined4 *)(&stack0x00000004 + iVar2) = uVar5;
  uVar5 = SmDev();
  *(undefined4 *)(&stack0x00000008 + iVar2) = uVar5;
  uVar5 = __floatsisf(*(undefined4 *)(&stack0x00000000 + iVar2));
  uVar5 = __mulsf3(uVar5,*(undefined4 *)(&stack0x00000004 + iVar2));
  __addsf3(uVar5,DAT_0017bb38);
  uVar5 = __fixsfsi();
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar5;
  uVar5 = __floatsisf(*(undefined4 *)
                       (DAT_0017bb3c + *(int *)(&stack0x00000008 + iVar2) * 4 + 0x17b9e6));
  __mulsf3(uVar5,*(undefined4 *)(this + DAT_0017bb20));
  uVar5 = __fixsfsi();
  (**(code **)((int)&iStack_4 + iVar2))(piVar13,*(undefined4 *)(&stack0x00000000 + iVar2),uVar5);
  String::String((String *)(&stack0x00000130 + iVar2),
                 (String *)
                 (DAT_0017bb40 + 0x17b9bc +
                 (uint)*(byte *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 0x36) * 0x24));
  piVar13 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar13 + 0x2c);
  String::String((String *)(&stack0x00000138 + iVar2),(String *)(&stack0x00000130 + iVar2));
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *(TrueTypeTextElement **)((int)&iStack_4 + iVar2) = pTVar4;
  uVar5 = *(undefined4 *)(this + 0x18);
  uVar14 = **(undefined4 **)(iVar12 + DAT_0017bb44);
  *puVar20 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement(pTVar4,&stack0x00000138 + iVar2,uVar5,uVar14);
  uVar5 = *(undefined4 *)((int)&iStack_4 + iVar2);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)((int)&iStack_4 + iVar2);
  (**(code **)(&stack0x00000000 + iVar2))(piVar13,uVar5);
  String::~String((String *)(&stack0x00000138 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x38));
  L_PrintLog((char *)(DAT_0017bb48 + 0x17ba00),(char *)(DAT_0017bb4c + 0x17ba02));
  sprintf(&stack0x000001f8 + iVar2,(char *)(DAT_0017bb50 + 0x17ba10),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_0017bb54 + 0x17ba1c),&stack0x000001f8 + iVar2);
  piVar11 = *(int **)(this + 0x38);
  *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
  iVar9 = SmDev();
  uVar14 = *(undefined4 *)(DAT_0017bb58 + iVar9 * 4 + 0x17ba56);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(this + 0x530);
  uVar5 = SmDev();
  *(undefined4 *)(&stack0x00000004 + iVar2) = uVar5;
  uVar5 = __floatsisf(uVar14);
  __mulsf3(uVar5,*(undefined4 *)(&stack0x00000000 + iVar2));
  uVar5 = __fixsfsi();
  uVar14 = __floatsisf(*(undefined4 *)
                        (DAT_0017bb5c + *(int *)(&stack0x00000004 + iVar2) * 4 + 0x17ba9a));
  __mulsf3(uVar14,*(undefined4 *)(this + DAT_0017bb20));
  uVar14 = __fixsfsi();
  (**(code **)((int)&iStack_4 + iVar2))(piVar11,uVar5,uVar14);
  if (*(int *)(this + 0xe0) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0xe0) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0xe0) + 100) + 4))();
    }
    if (*(int **)(this + 0xe0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xe0) + 4))();
    }
    *(undefined4 *)(this + 0xe0) = 0;
  }
  iVar9 = Character::getSameZombiePowerupIconIdx(*(Character **)(*(int *)(this + 0x24) + 0x8c));
  if (iVar9 != -1) {
    piVar11 = *(int **)(this + 0x14);
    iVar10 = *(int *)(this + 0xc);
    *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar11 + 0x2c);
    pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar10 + DAT_0017bb60),iVar9,false);
    pIVar7 = (ImageElement *)operator_new(0x98);
    *(ImageElement **)((int)&iStack_4 + iVar2) = pIVar7;
    ImageElement::ImageElement(pIVar7,pCVar6,'\t',true);
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)((int)&iStack_4 + iVar2);
    (**(code **)(&stack0x00000000 + iVar2))(piVar11,*(undefined4 *)((int)&iStack_4 + iVar2));
    iVar9 = *(int *)(this + 0x34);
    piVar11 = *(int **)(this + 0xe0);
    iVar10 = *piVar11;
    *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(iVar9 + 4);
    uVar5 = __floatsisf(*(undefined4 *)(iVar9 + 8));
    *(undefined4 *)(&stack0x00000000 + iVar2) = uVar5;
    uVar5 = __mulsf3(*(undefined4 *)(this + DAT_0017be60),0x41000000);
    __subsf3(*(undefined4 *)(&stack0x00000000 + iVar2),uVar5);
    uVar5 = __fixsfsi();
    iVar9 = DAT_0017be60;
    (**(code **)(iVar10 + 0x14))(piVar11,*(undefined4 *)((int)&iStack_4 + iVar2),uVar5);
    iVar10 = SmDev();
    uVar21 = __mulsf3(*(undefined4 *)(DAT_0017be64 + iVar10 * 4 + 0x17bc10),
                      *(undefined4 *)(this + iVar9));
    ImageElement::setScale
              (*(ImageElement **)(this + 0xe0),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  }
  if (*(int *)(this + 0xdc) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0xdc) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0xdc) + 100) + 4))();
    }
    if (*(int **)(this + 0xdc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xdc) + 4))();
    }
    *(undefined4 *)(this + 0xdc) = 0;
  }
  iVar9 = Character::getRareValueIconIdx(*(Character **)(*(int *)(this + 0x24) + 0x8c));
  if (iVar9 != -1) {
    piVar11 = *(int **)(this + 0x14);
    iVar10 = *(int *)(this + 0xc);
    *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(*piVar11 + 0x2c);
    uVar5 = PackedImage::getImage(*(PackedImage **)(iVar10 + DAT_0017be68),iVar9,false);
    *(undefined4 *)(&stack0x00000000 + iVar2) = uVar5;
    pIVar7 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar7,*(CImage **)(&stack0x00000000 + iVar2),'\t',true);
    *(ImageElement **)(this + 0xdc) = pIVar7;
    (**(code **)((int)&iStack_4 + iVar2))(piVar11,pIVar7);
    uVar21 = __addsf3(*(undefined4 *)(this + DAT_0017be60));
    ImageElement::setScale
              (*(ImageElement **)(this + 0xdc),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
    iVar9 = *(int *)(this + 0xa4);
    piVar11 = *(int **)(this + 0xdc);
    (**(code **)(*piVar11 + 0x14))
              (piVar11,(*(int *)(iVar9 + 4) - *(int *)(iVar9 + 0xc) / 2) + 0x14,
               (*(int *)(iVar9 + 8) - *(int *)(iVar9 + 0x10) / 2) + 0x14);
  }
  redrawFavoriteButton(this,false);
  CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x24),'\x1d','\x01',true);
  String::~String((String *)(&stack0x00000130 + iVar2));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x0000015c + iVar2));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000140 + iVar2));
  String::~String((String *)(&stack0x00000038 + iVar2));
  String::~String((String *)(&stack0x00000020 + iVar2));
  String::~String((String *)(&stack0x00000010 + iVar2));
  if (*(int *)(&stack0x000002f8 + iVar2) == **(int **)(iVar12 + DAT_0017be6c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


