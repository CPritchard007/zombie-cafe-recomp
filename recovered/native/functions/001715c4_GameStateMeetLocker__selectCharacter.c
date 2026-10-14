/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001715c4 GameStateMeetLocker::selectCharacter */

/* GameStateMeetLocker::selectCharacter(int) */

void __thiscall GameStateMeetLocker::selectCharacter(GameStateMeetLocker *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  TrueTypeTextElement *pTVar5;
  undefined4 uVar6;
  int iVar7;
  CImage *pCVar8;
  ImageElement *pIVar9;
  short extraout_r1;
  int iVar10;
  int iVar11;
  int *piVar12;
  char *__format;
  int *piVar13;
  Character *pCVar14;
  int *piVar15;
  code *pcVar16;
  undefined4 *puVar17;
  float __x;
  float fVar23;
  float __x_00;
  undefined8 uVar24;
  undefined4 uStack_4;
  undefined4 *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  
  iVar2 = DAT_00171730;
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_00171730);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_00171730);
  piVar19 = (int *)(&stack0xffffffec + DAT_00171730);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_00171730);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_00171730);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_00171730);
  *(int *)(&stack0x0000000c + DAT_00171730) = DAT_00171734 + 0x1715d4;
  *(undefined4 *)(&stack0x00000310 + DAT_00171730) =
       **(undefined4 **)(DAT_00171734 + 0x1715d4 + DAT_00171738);
  unSelectCharacter(this);
  iVar10 = *(int *)(this + (param_1 + 0x2e) * 4);
  *(int *)(this + 0x28) = param_1;
  *(int *)(this + 0x2c) = iVar10;
  String::String((String *)(&stack0x00000020 + iVar2),(String *)(*(int *)(iVar10 + 0x8c) + 8));
  piVar15 = *(int **)(*(int *)(&stack0x0000000c + iVar2) + DAT_0017173c);
  iVar11 = *piVar15;
  iVar10 = SmDev();
  uVar4 = FontManager::addFont
                    (iVar11,SUB41(*(undefined4 *)(DAT_00171740 + iVar10 * 4 + 0x171630),0));
  piVar12 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar4;
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x00000028 + iVar2),(String *)(&stack0x00000020 + iVar2));
  iVar10 = SmDev();
  *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(DAT_00171744 + iVar10 * 4 + 0x1716aa);
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar17 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 2;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0x11;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x00000028 + iVar2,*(undefined4 *)(&stack0x00000010 + iVar2),
             *(undefined4 *)(&stack0x00000018 + iVar2));
  *(TrueTypeTextElement **)(this + 0x30) = pTVar5;
  (**(code **)(&stack0x00000014 + iVar2))(piVar12,pTVar5);
  String::~String((String *)(&stack0x00000028 + iVar2));
  piVar12 = *(int **)(*(int *)(&stack0x0000000c + iVar2) + DAT_00171748);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x30));
  L_PrintLog((char *)(DAT_0017174c + 0x171688),(char *)(DAT_00171750 + 0x17168a));
  sprintf(&stack0x00000210 + iVar2,(char *)(DAT_00171754 + 0x171698),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_00171758 + 0x1716a4),&stack0x00000210 + iVar2);
  piVar13 = *(int **)(this + 0x30);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar13 + 0x14);
  iVar10 = SmDev();
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(DAT_0017175c + iVar10 * 4 + 0x1716ea);
  iVar10 = SmDev();
  (**(code **)(&stack0x00000010 + iVar2))
            (piVar13,*(undefined4 *)(&stack0x00000014 + iVar2),
             *(undefined4 *)(DAT_00171760 + iVar10 * 4 + 0x171714));
  String::String((String *)(&stack0x00000030 + iVar2));
  iVar10 = **(int **)(*(int *)(this + 0x2c) + 0x8c);
  iVar11 = (int)*(short *)(iVar10 + DAT_00171768);
  if (((**(int **)(*(int *)(&stack0x0000000c + iVar2) + DAT_00171764) == iVar11) ||
      (piVar13 = *(int **)(*(int *)(&stack0x0000000c + iVar2) + DAT_0017176c), *piVar13 == iVar11))
     || (piVar13[1] == iVar11)) {
    String::String((String *)(&stack0x00000038 + iVar2),(String *)(iVar10 + DAT_00171770));
    String::operator=((String *)(&stack0x00000030 + iVar2),&stack0x00000038 + iVar2);
    String::~String((String *)(&stack0x00000038 + iVar2));
    String::String((String *)(&stack0x00000040 + iVar2),(char *)(DAT_00171774 + 0x171722));
    String::operator+=((String *)(&stack0x00000030 + iVar2),&stack0x00000040 + iVar2);
    puVar1 = &stack0x00000040;
  }
  else {
    String::String((String *)(&stack0x00000048 + iVar2),(String *)(iVar10 + DAT_00171b34));
    String::operator=((String *)(&stack0x00000030 + iVar2),&stack0x00000048 + iVar2);
    puVar1 = &stack0x00000048;
  }
  String::~String((String *)(puVar1 + iVar2));
  String::String((String *)(&stack0x00000050 + iVar2),(char *)(DAT_00171b38 + 0x171798));
  iVar10 = SmDev();
  MultiByteString::insertStringNextLine
            ((String *)(&stack0x00000050 + iVar2),(String *)(&stack0x00000030 + iVar2),
             *(int *)(iVar10 * 4 + DAT_00171b3c + 0x1717a8));
  iVar11 = *piVar15;
  iVar10 = SmDev();
  uVar4 = FontManager::addFont
                    (iVar11,SUB41(*(undefined4 *)(DAT_00171b40 + iVar10 * 4 + 0x1717de),0));
  piVar13 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar4;
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar13 + 0x2c);
  String::String((String *)(&stack0x00000058 + iVar2),(String *)(&stack0x00000050 + iVar2));
  iVar10 = SmDev();
  *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(DAT_00171b44 + iVar10 * 4 + 0x171858);
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar18 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 2;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 9;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x00000058 + iVar2,*(undefined4 *)(&stack0x00000010 + iVar2),
             *(undefined4 *)(&stack0x00000018 + iVar2));
  *(TrueTypeTextElement **)(this + 0x34) = pTVar5;
  (**(code **)(&stack0x00000014 + iVar2))(piVar13,pTVar5);
  String::~String((String *)(&stack0x00000058 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x34));
  L_PrintLog((char *)(DAT_00171b48 + 0x171830),(char *)(DAT_00171b4c + 0x171832));
  sprintf(&stack0x00000210 + iVar2,(char *)(DAT_00171b50 + 0x171840),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_00171b54 + 0x17184c),&stack0x00000210 + iVar2);
  piVar12 = *(int **)(this + 0x34);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar12 + 0x14);
  iVar10 = SmDev();
  uVar4 = *(undefined4 *)(DAT_00171b58 + iVar10 * 4 + 0x1718c2);
  iVar10 = SmDev();
  uVar4 = __fixsfsi(uVar4);
  uVar6 = __fixsfsi(*(undefined4 *)(DAT_00171b5c + iVar10 * 4 + 0x1718f2));
  (**(code **)(&stack0x00000014 + iVar2))(piVar12,uVar4,uVar6);
  __format = (char *)(DAT_00171b60 + 0x171898);
  iVar10 = (int)*(short *)(**(int **)(*(int *)(this + 0x2c) + 0x8c) + DAT_00171b64);
  sVar3 = __divsi3(iVar10,0x3c);
  __aeabi_idivmod(iVar10,0x3c);
  *piVar19 = (int)extraout_r1;
  snprintf(&stack0x00000190 + iVar2,0x80,__format,(int)sVar3);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000158 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000060 + iVar2));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x00000060 + iVar2);
  String::~String((String *)(&stack0x00000060 + iVar2));
  String::String((String *)(&stack0x00000068 + iVar2),(char *)(DAT_00171b6c + 0x1718f2));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x00000068 + iVar2);
  String::~String((String *)(&stack0x00000068 + iVar2));
  String::valueOf((int)(&stack0x00000070 + iVar2));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x00000070 + iVar2);
  String::~String((String *)(&stack0x00000070 + iVar2));
  String::String((String *)(&stack0x00000078 + iVar2),(char *)(DAT_00171b70 + 0x171926));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x00000078 + iVar2);
  String::~String((String *)(&stack0x00000078 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000080 + iVar2));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x00000080 + iVar2);
  String::~String((String *)(&stack0x00000080 + iVar2));
  String::valueOf((int)(&stack0x00000088 + iVar2));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x00000088 + iVar2);
  String::~String((String *)(&stack0x00000088 + iVar2));
  String::String((String *)(&stack0x00000090 + iVar2),(char *)(DAT_00171b7c + 0x17198c));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x00000090 + iVar2);
  String::~String((String *)(&stack0x00000090 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000098 + iVar2));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x00000098 + iVar2);
  String::~String((String *)(&stack0x00000098 + iVar2));
  pCVar14 = *(Character **)(*(int *)(this + 0x2c) + 0x8c);
  sVar3 = *(short *)(*(int *)pCVar14 + DAT_00171b84);
  iVar10 = Character::getRareValue(pCVar14);
  uVar4 = __floatsisf((int)sVar3);
  uVar4 = __mulsf3(uVar4,*(undefined4 *)
                          (DAT_00171b88 + *(int *)(pCVar14 + 0x28) * 0xc + iVar10 * 0xe10 + 0x171a1e
                          ));
  roundf(__x);
  iVar10 = Character::getRareValue(pCVar14);
  iVar11 = Character::getSameZombiePowerupNum(pCVar14);
  __addsf3(uVar4,*(undefined4 *)(DAT_00171b8c + iVar11 * 0xc + iVar10 * 0x3c + 0x171a3c));
  sVar3 = __fixsfsi();
  fVar23 = (float)__floatsisf((int)sVar3);
  roundf(fVar23);
  __fixsfsi();
  String::valueOf((int)(&stack0x000000a0 + iVar2));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x000000a0 + iVar2);
  String::~String((String *)(&stack0x000000a0 + iVar2));
  String::String((String *)(&stack0x000000a8 + iVar2),(char *)(DAT_00171b90 + 0x171a50));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x000000a8 + iVar2);
  String::~String((String *)(&stack0x000000a8 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000b0 + iVar2));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x000000b0 + iVar2);
  String::~String((String *)(&stack0x000000b0 + iVar2));
  String::String((String *)(&stack0x000000b8 + iVar2),&stack0x00000190 + iVar2);
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x000000b8 + iVar2);
  String::~String((String *)(&stack0x000000b8 + iVar2));
  String::String((String *)(&stack0x000000c0 + iVar2),(char *)(DAT_00171b98 + 0x171aa2));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x000000c0 + iVar2);
  String::~String((String *)(&stack0x000000c0 + iVar2));
  String::String((String *)(&stack0x000000c8 + iVar2),(char *)(DAT_00171b9c + 0x171aba));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x000000c8 + iVar2);
  String::~String((String *)(&stack0x000000c8 + iVar2));
  String::String((String *)(&stack0x000000d0 + iVar2),(char *)(DAT_00171ba0 + 0x171ad2));
  StringBuffer::append(&stack0x00000158 + iVar2,&stack0x000000d0 + iVar2);
  String::~String((String *)(&stack0x000000d0 + iVar2));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000174 + iVar2));
  String::String((String *)(&stack0x000000d8 + iVar2),(char *)(DAT_00171ba4 + 0x171af0));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x000000d8 + iVar2);
  String::~String((String *)(&stack0x000000d8 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000e0 + iVar2));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x000000e0 + iVar2);
  String::~String((String *)(&stack0x000000e0 + iVar2));
  pCVar14 = *(Character **)(*(int *)(this + 0x2c) + 0x8c);
  sVar3 = *(short *)(*(int *)pCVar14 + DAT_00171bac);
  iVar10 = Character::getRareValue(pCVar14);
  uVar4 = __floatsisf((int)sVar3);
  uVar4 = __mulsf3(uVar4,*(undefined4 *)
                          (DAT_00171f6c + *(int *)(pCVar14 + 0x28) * 0xc + iVar10 * 0xe10 + 0x171c04
                          ));
  roundf(__x_00);
  iVar10 = Character::getRareValue(pCVar14);
  iVar11 = Character::getSameZombiePowerupNum(pCVar14);
  iVar7 = __fixsfsi(uVar4);
  iVar10 = __fixsfsi(*(undefined4 *)(DAT_00171f70 + iVar11 * 0xc + iVar10 * 0x3c + 0x171c2a));
  fVar23 = (float)__floatsisf((iVar7 + iVar10) * 0x10000 >> 0x10);
  roundf(fVar23);
  __fixsfsi();
  String::valueOf((int)(&stack0x000000e8 + iVar2));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x000000e8 + iVar2);
  String::~String((String *)(&stack0x000000e8 + iVar2));
  String::String((String *)(&stack0x000000f0 + iVar2),(char *)(DAT_00171f74 + 0x171c38));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x000000f0 + iVar2);
  String::~String((String *)(&stack0x000000f0 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000f8 + iVar2));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x000000f8 + iVar2);
  String::~String((String *)(&stack0x000000f8 + iVar2));
  String::valueOf((int)(&stack0x00000100 + iVar2));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x00000100 + iVar2);
  String::~String((String *)(&stack0x00000100 + iVar2));
  String::String((String *)(&stack0x00000108 + iVar2),(char *)(DAT_00171f80 + 0x171c94));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x00000108 + iVar2);
  String::~String((String *)(&stack0x00000108 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000110 + iVar2));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x00000110 + iVar2);
  String::~String((String *)(&stack0x00000110 + iVar2));
  __fixsfsi(*(undefined4 *)(*(int *)(*(int *)(this + 0x2c) + 0x8c) + 0x40));
  String::valueOf((int)(&stack0x00000118 + iVar2));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x00000118 + iVar2);
  String::~String((String *)(&stack0x00000118 + iVar2));
  String::String((String *)(&stack0x00000120 + iVar2),(char *)(DAT_00171f88 + 0x171cee));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x00000120 + iVar2);
  String::~String((String *)(&stack0x00000120 + iVar2));
  fVar23 = (float)CharacterInstance::getMaxEnergy();
  roundf(fVar23);
  __fixsfsi();
  String::valueOf((int)(&stack0x00000128 + iVar2));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x00000128 + iVar2);
  String::~String((String *)(&stack0x00000128 + iVar2));
  String::String((String *)(&stack0x00000130 + iVar2),(char *)(DAT_00171f8c + 0x171d2a));
  StringBuffer::append(&stack0x00000174 + iVar2,&stack0x00000130 + iVar2);
  String::~String((String *)(&stack0x00000130 + iVar2));
  piVar12 = *(int **)(this + 0x14);
  pcVar16 = *(code **)(*piVar12 + 0x2c);
  StringBuffer::toString();
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar20 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x00000138 + iVar2,*(undefined4 *)(this + 0x1c),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x3c) = pTVar5;
  (*pcVar16)(piVar12,pTVar5);
  String::~String((String *)(&stack0x00000138 + iVar2));
  piVar12 = *(int **)(*(int *)(&stack0x0000000c + iVar2) + DAT_00171f90);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x3c));
  L_PrintLog((char *)(DAT_00171f94 + 0x171d8e),(char *)(DAT_00171f98 + 0x171d90));
  sprintf(&stack0x00000210 + iVar2,(char *)(DAT_00171f9c + 0x171d9e),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_00171fa0 + 0x171daa),&stack0x00000210 + iVar2);
  piVar13 = *(int **)(this + 0x3c);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar13 + 0x14);
  iVar10 = SmDev();
  uVar4 = *(undefined4 *)(DAT_00171fa4 + iVar10 * 4 + 0x171de8);
  iVar10 = SmDev();
  (**(code **)(&stack0x00000014 + iVar2))
            (piVar13,uVar4,*(undefined4 *)(DAT_00171fa8 + iVar10 * 4 + 0x171e28));
  piVar13 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar13 + 0x2c);
  StringBuffer::toString();
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar21 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x00000140 + iVar2,*(undefined4 *)(this + 0x1c),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x40) = pTVar5;
  (**(code **)(&stack0x00000014 + iVar2))(piVar13,pTVar5);
  String::~String((String *)(&stack0x00000140 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x40));
  L_PrintLog((char *)(DAT_00171fac + 0x171e2a),(char *)(DAT_00171fb0 + 0x171e2c));
  sprintf(&stack0x00000210 + iVar2,(char *)(DAT_00171fb4 + 0x171e3a),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_00171fb8 + 0x171e46),&stack0x00000210 + iVar2);
  piVar13 = *(int **)(this + 0x40);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar13 + 0x14);
  iVar10 = SmDev();
  uVar4 = *(undefined4 *)(DAT_00171fbc + iVar10 * 4 + 0x171e9c);
  iVar10 = SmDev();
  (**(code **)(&stack0x00000014 + iVar2))
            (piVar13,uVar4,*(undefined4 *)(DAT_00171fc0 + iVar10 * 4 + 0x171ec4));
  String::String((String *)(&stack0x00000148 + iVar2),
                 (String *)
                 (DAT_00171fc4 + 0x171ea2 +
                 (uint)*(byte *)(*(int *)(*(int *)(this + 0x2c) + 0x8c) + 0x36) * 0x24));
  piVar13 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar13 + 0x2c);
  String::String((String *)(&stack0x00000150 + iVar2),(String *)(&stack0x00000148 + iVar2));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  uVar4 = **(undefined4 **)(*(int *)(&stack0x0000000c + iVar2) + DAT_00171fc8);
  *puVar22 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x00000150 + iVar2,*(undefined4 *)(&stack0x00000010 + iVar2),uVar4);
  *(TrueTypeTextElement **)(this + 0x44) = pTVar5;
  (**(code **)(&stack0x00000014 + iVar2))(piVar13,pTVar5);
  String::~String((String *)(&stack0x00000150 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x44));
  L_PrintLog((char *)(DAT_00171fcc + 0x171ee8),(char *)(DAT_00171fd0 + 0x171eea));
  sprintf(&stack0x00000210 + iVar2,(char *)(DAT_00171fd4 + 0x171ef8),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_00171fd8 + 0x171f04),&stack0x00000210 + iVar2);
  piVar12 = *(int **)(this + 0x44);
  pcVar16 = *(code **)(*piVar12 + 0x14);
  iVar10 = SmDev();
  uVar4 = *(undefined4 *)((int)&DAT_00171f88 + DAT_00171fdc + iVar10 * 4);
  iVar10 = SmDev();
  (*pcVar16)(piVar12,uVar4,*(undefined4 *)(DAT_00171fe0 + iVar10 * 4 + 0x171f30));
  if (*(int *)(this + 0x84) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x84) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x84) + 100) + 4))();
    }
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
  }
  iVar10 = Character::getSameZombiePowerupIconIdx(*(Character **)(*(int *)(this + 0x2c) + 0x8c));
  if (iVar10 != -1) {
    piVar12 = *(int **)(this + 0x14);
    iVar11 = *(int *)(this + 0xc);
    *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
    pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_00172384),iVar10,false);
    pIVar9 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar9,pCVar8,'\t',true);
    *(ImageElement **)(this + 0x84) = pIVar9;
    (**(code **)(&stack0x00000010 + iVar2))(piVar12,pIVar9);
    (**(code **)(**(int **)(this + 0x84) + 0x14))
              (*(int **)(this + 0x84),*(undefined4 *)(*(int *)(this + 0x40) + 4),
               *(undefined4 *)(*(int *)(this + 0x40) + 8));
    iVar10 = SmDev();
    uVar24 = __mulsf3(*(undefined4 *)(DAT_00172388 + iVar10 * 4 + 0x172052),
                      *(undefined4 *)(this + 0x24));
    ImageElement::setScale
              (*(ImageElement **)(this + 0x84),(float)uVar24,(float)((ulonglong)uVar24 >> 0x20));
  }
  if (*(int *)(this + 0x80) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x80) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x80) + 100) + 4))();
    }
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
  }
  iVar10 = Character::getRareValueIconIdx(*(Character **)(*(int *)(this + 0x2c) + 0x8c));
  if (iVar10 != -1) {
    piVar12 = *(int **)(this + 0x14);
    iVar11 = *(int *)(this + 0xc);
    *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
    pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_00172384),iVar10,false);
    pIVar9 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar9,pCVar8,'\t',true);
    *(ImageElement **)(this + 0x80) = pIVar9;
    (**(code **)(&stack0x00000010 + iVar2))(piVar12,pIVar9);
    uVar24 = __addsf3(*(undefined4 *)(this + 0x24));
    ImageElement::setScale
              (*(ImageElement **)(this + 0x80),(float)uVar24,(float)((ulonglong)uVar24 >> 0x20));
    iVar10 = *(int *)(this + 0x54);
    (**(code **)(**(int **)(this + 0x80) + 0x14))
              (*(int **)(this + 0x80),(*(int *)(iVar10 + 4) - *(int *)(iVar10 + 0xc) / 2) + 0x14,
               (*(int *)(iVar10 + 8) - *(int *)(iVar10 + 0x10) / 2) + 0x14);
  }
  if (*(int *)(this + 0x88) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x88) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x88) + 100) + 4))();
    }
    if (*(int **)(this + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x88) + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
  }
  iVar10 = ZombieCafe::getSpecialAttackUnit
                     (*(ZombieCafe **)(this + 0xc),
                      (uint)*(ushort *)(**(int **)(*(int *)(this + 0x2c) + 0x8c) + DAT_0017238c));
  if (iVar10 == 0) goto LAB_00172216;
  piVar12 = *(int **)(this + 0x14);
  iVar11 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
  if (iVar10 == 3) {
    pCVar8 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_00172384),DAT_00172390,false);
    pIVar9 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar9,pCVar8,'!',true);
LAB_001721e0:
    *(ImageElement **)(this + 0x88) = pIVar9;
    (**(code **)(&stack0x00000010 + iVar2))(piVar12,pIVar9);
  }
  else {
    if (iVar10 != 2) {
      pCVar8 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_00172384),DAT_00172394,false);
      pIVar9 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar9,pCVar8,'!',true);
      goto LAB_001721e0;
    }
    pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_00172384),0x10e,false);
    pIVar9 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar9,pCVar8,'!',true);
    *(ImageElement **)(this + 0x88) = pIVar9;
    (**(code **)(&stack0x00000010 + iVar2))(piVar12,pIVar9);
  }
  iVar10 = *(int *)(this + 0x54);
  (**(code **)(**(int **)(this + 0x88) + 0x14))
            (*(int **)(this + 0x88),*(int *)(iVar10 + 0xc) / 2 + *(int *)(iVar10 + 4),
             (*(int *)(iVar10 + 8) - *(int *)(iVar10 + 0x10) / 2) + -0x14);
LAB_00172216:
  redrawFavoriteButton(this,false);
  (**(code **)(**(int **)(this + 0x90) + 0x20))(*(int **)(this + 0x90),1);
  (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),1);
  (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),1);
  CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x2c),'\x1d','\x01',true);
  String::~String((String *)(&stack0x00000148 + iVar2));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000174 + iVar2));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000158 + iVar2));
  String::~String((String *)(&stack0x00000050 + iVar2));
  String::~String((String *)(&stack0x00000030 + iVar2));
  String::~String((String *)(&stack0x00000020 + iVar2));
  if (*(int *)(&stack0x00000310 + iVar2) ==
      **(int **)(*(int *)(&stack0x0000000c + iVar2) + DAT_00172398)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


