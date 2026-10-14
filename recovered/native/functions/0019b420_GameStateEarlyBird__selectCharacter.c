/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019b420 GameStateEarlyBird::selectCharacter */

/* WARNING: Control flow encountered bad instruction data */
/* GameStateEarlyBird::selectCharacter(int) */

void __thiscall GameStateEarlyBird::selectCharacter(GameStateEarlyBird *this,int param_1)

{
  GameStateEarlyBird GVar1;
  undefined1 *puVar2;
  int iVar3;
  short sVar4;
  TrueTypeTextElement *pTVar5;
  int iVar6;
  undefined4 uVar7;
  short extraout_r1;
  int extraout_r1_00;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  char *__format;
  int *piVar13;
  Character *pCVar14;
  int *piVar15;
  undefined4 in_r12;
  undefined4 *puVar16;
  char cVar21;
  undefined4 in_cr15;
  float __x;
  float __x_00;
  int iStack_4;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  
  iVar3 = iRam0019b45c;
  piVar15 = (int *)(iRam0019b458 + 0x19b42c);
  puVar16 = (undefined4 *)(&stack0xffffffec + iRam0019b45c);
  puVar17 = (undefined4 *)(&stack0xffffffec + iRam0019b45c);
  piVar18 = (int *)(&stack0xffffffec + iRam0019b45c);
  puVar19 = (undefined4 *)(&stack0xffffffec + iRam0019b45c);
  puVar20 = (undefined4 *)(&stack0xffffffec + iRam0019b45c);
  puVar11 = *(undefined4 **)((int)piVar15 + iRam0019b460);
  *(undefined4 *)(&stack0x000002e8 + iRam0019b45c) = *puVar11;
  unSelectCharacter(this);
  iVar10 = *(int *)(this + (param_1 + 0x40) * 4 + 4);
  *(undefined4 **)(&stack0x00000008 + iVar3) = puVar11;
  *(int *)(this + 0x24) = iVar10;
  if (iVar10 != 0) {
    *(int *)(this + 0x20) = param_1;
    String::String((String *)(&stack0x00000010 + iVar3),
                   (String *)(**(int **)(iVar10 + 0x8c) + DAT_0019b820));
    piVar12 = *(int **)(this + 0x14);
    *(undefined4 *)((int)&iStack_4 + iVar3) = *(undefined4 *)(*piVar12 + 0x2c);
    String::String((String *)(&stack0x00000018 + iVar3),(String *)(&stack0x00000010 + iVar3));
    iVar10 = SmDev();
    *(undefined4 *)(&stack0x00000000 + iVar3) =
         *(undefined4 *)(DAT_0019b824 + iVar10 * 4 + 0x19b4a2);
    pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
    *puVar16 = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
    *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0x12;
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              (pTVar5,&stack0x00000018 + iVar3,*(undefined4 *)(this + 0x18),
               *(undefined4 *)(&stack0x00000000 + iVar3));
    *(TrueTypeTextElement **)(this + 0x28) = pTVar5;
    (**(code **)((int)&iStack_4 + iVar3))(piVar12,pTVar5);
    String::~String((String *)(&stack0x00000018 + iVar3));
    piVar12 = *(int **)((int)piVar15 + DAT_0019b828);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x28));
    L_PrintLog((char *)(DAT_0019b82c + 0x19b4da),(char *)(DAT_0019b830 + 0x19b4dc));
    sprintf(&stack0x000001e8 + iVar3,(char *)(DAT_0019b834 + 0x19b4ea),*(int *)(*piVar12 + 4) + 1);
    L_PrintLog((char *)(DAT_0019b838 + 0x19b4f6),&stack0x000001e8 + iVar3);
    piVar13 = *(int **)(this + 0x28);
    *(undefined4 *)((int)&iStack_4 + iVar3) = *(undefined4 *)(*piVar13 + 0x14);
    iVar10 = SmDev();
    *(undefined4 *)(&stack0x00000000 + iVar3) =
         *(undefined4 *)(DAT_0019b83c + iVar10 * 4 + 0x19b534);
    iVar10 = SmDev();
    (**(code **)((int)&iStack_4 + iVar3))
              (piVar13,*(undefined4 *)(&stack0x00000000 + iVar3),
               *(undefined4 *)(DAT_0019b840 + iVar10 * 4 + 0x19b55e));
    String::String((String *)(&stack0x00000020 + iVar3),
                   (String *)(**(int **)(*(int *)(this + 0x24) + 0x8c) + DAT_0019b844));
    String::String((String *)(&stack0x00000028 + iVar3),(char *)(DAT_0019b848 + 0x19b540));
    iVar10 = SmDev();
    MultiByteString::insertStringNextLine
              ((String *)(&stack0x00000028 + iVar3),(String *)(&stack0x00000020 + iVar3),
               *(int *)(DAT_0019b84c + iVar10 * 4 + 0x19b598));
    piVar13 = *(int **)(this + 0x14);
    *(undefined4 *)(&stack0x00000000 + iVar3) = *(undefined4 *)(*piVar13 + 0x2c);
    String::String((String *)(&stack0x00000030 + iVar3),(String *)(&stack0x00000028 + iVar3));
    iVar10 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar3) =
         *(undefined4 *)(DAT_0019b850 + iVar10 * 4 + 0x19b584);
    pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
    *puVar17 = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
    *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0x11;
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
    uVar8 = *(undefined4 *)(this + 0x18);
    *(TrueTypeTextElement **)((int)&iStack_4 + iVar3) = pTVar5;
    TrueTypeTextElement::TrueTypeTextElement
              (pTVar5,&stack0x00000030 + iVar3,uVar8,*(undefined4 *)(&stack0x00000004 + iVar3));
    pcVar9 = *(code **)(&stack0x00000000 + iVar3);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)((int)&iStack_4 + iVar3);
    (*pcVar9)(piVar13);
    String::~String((String *)(&stack0x00000030 + iVar3));
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x2c));
    L_PrintLog((char *)(DAT_0019b854 + 0x19b5b8),(char *)(DAT_0019b858 + 0x19b5ba));
    sprintf(&stack0x000001e8 + iVar3,(char *)(DAT_0019b85c + 0x19b5c8),*(int *)(*piVar12 + 4) + 1);
    L_PrintLog((char *)(DAT_0019b860 + 0x19b5d4),&stack0x000001e8 + iVar3);
    piVar12 = *(int **)(this + 0x2c);
    *(undefined4 *)((int)&iStack_4 + iVar3) = *(undefined4 *)(*piVar12 + 0x14);
    iVar10 = SmDev();
    uVar8 = *(undefined4 *)(DAT_0019b864 + iVar10 * 4 + 0x19b642);
    iVar10 = SmDev();
    (**(code **)((int)&iStack_4 + iVar3))
              (piVar12,uVar8,*(undefined4 *)(DAT_0019b868 + iVar10 * 4 + 0x19b66a));
    __format = (char *)(DAT_0019b86c + 0x19b60e);
    iVar10 = (int)*(short *)(**(int **)(*(int *)(this + 0x24) + 0x8c) + DAT_0019b870);
    *(int *)((int)&iStack_4 + iVar3) = iVar10;
    sVar4 = __divsi3(iVar10,0x3c);
    __aeabi_idivmod(*(undefined4 *)((int)&iStack_4 + iVar3),0x3c);
    *piVar18 = (int)extraout_r1;
    snprintf(&stack0x00000168 + iVar3,0x80,__format,(int)sVar4);
    StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000130 + iVar3));
    Vector<String>::elementAt((int)(&stack0x00000038 + iVar3));
    StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000038 + iVar3);
    String::~String((String *)(&stack0x00000038 + iVar3));
    String::valueOf((int)(&stack0x00000040 + iVar3));
    StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000040 + iVar3);
    String::~String((String *)(&stack0x00000040 + iVar3));
    String::String((String *)(&stack0x00000048 + iVar3),(char *)(DAT_0019b87c + 0x19b696));
    StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000048 + iVar3);
    String::~String((String *)(&stack0x00000048 + iVar3));
    Vector<String>::elementAt((int)(&stack0x00000050 + iVar3));
    StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000050 + iVar3);
    String::~String((String *)(&stack0x00000050 + iVar3));
    pCVar14 = *(Character **)(*(int *)(this + 0x24) + 0x8c);
    sVar4 = *(short *)(*(int *)pCVar14 + DAT_0019b884);
    uVar8 = Character::getRareValue(pCVar14);
    *(undefined4 *)((int)&iStack_4 + iVar3) = uVar8;
    uVar8 = __floatsisf((int)sVar4);
    uVar8 = __mulsf3(uVar8,*(undefined4 *)
                            (DAT_0019b888 +
                             *(int *)((int)&iStack_4 + iVar3) * 0xe10 +
                             *(int *)(pCVar14 + 0x28) * 0xc + 0x19b704));
    roundf(__x);
    *(undefined4 *)((int)&iStack_4 + iVar3) = uVar8;
    iVar10 = Character::getRareValue(pCVar14);
    iVar6 = Character::getSameZombiePowerupNum(pCVar14);
    __addsf3(*(undefined4 *)((int)&iStack_4 + iVar3),
             *(undefined4 *)(DAT_0019b88c + iVar6 * 0xc + iVar10 * 0x3c + 0x19b7a0));
    __fixsfsi();
    String::valueOf((int)(&stack0x00000058 + iVar3));
    StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000058 + iVar3);
    String::~String((String *)(&stack0x00000058 + iVar3));
    String::String((String *)(&stack0x00000060 + iVar3),(char *)(DAT_0019b890 + 0x19b758));
    StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000060 + iVar3);
    String::~String((String *)(&stack0x00000060 + iVar3));
    Vector<String>::elementAt((int)(&stack0x00000068 + iVar3));
    StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000068 + iVar3);
    String::~String((String *)(&stack0x00000068 + iVar3));
    String::String((String *)(&stack0x00000070 + iVar3),&stack0x00000168 + iVar3);
    StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000070 + iVar3);
    String::~String((String *)(&stack0x00000070 + iVar3));
    String::String((String *)(&stack0x00000078 + iVar3),(char *)(DAT_0019b898 + 0x19b7a8));
    StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000078 + iVar3);
    String::~String((String *)(&stack0x00000078 + iVar3));
    if (this[*(int *)(this + 0x20) + 0x1cc] != (GameStateEarlyBird)0x0) {
      Vector<String>::elementAt((int)(&stack0x00000080 + iVar3));
      StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000080 + iVar3);
      String::~String((String *)(&stack0x00000080 + iVar3));
      String::String((String *)(&stack0x00000088 + iVar3),
                     (String *)
                     (DAT_0019b8a0 + 0x19b816 +
                     (uint)(byte)this[*(int *)(this + 0x20) + 0x1cc] * 0x24));
      StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000088 + iVar3);
      String::~String((String *)(&stack0x00000088 + iVar3));
      String::String((String *)(&stack0x00000090 + iVar3),(char *)(DAT_0019b8a4 + 0x19b816));
      StringBuffer::append(&stack0x00000130 + iVar3,&stack0x00000090 + iVar3);
      String::~String((String *)(&stack0x00000090 + iVar3));
    }
    StringBuffer::StringBuffer((StringBuffer *)(&stack0x0000014c + iVar3));
    Vector<String>::elementAt((int)(&stack0x00000098 + iVar3));
    StringBuffer::append(&stack0x0000014c + iVar3,&stack0x00000098 + iVar3);
    String::~String((String *)(&stack0x00000098 + iVar3));
    pCVar14 = *(Character **)(*(int *)(this + 0x24) + 0x8c);
    sVar4 = *(short *)(*(int *)pCVar14 + DAT_0019bc10);
    uVar8 = Character::getRareValue(pCVar14);
    *(undefined4 *)((int)&iStack_4 + iVar3) = uVar8;
    uVar8 = __floatsisf((int)sVar4);
    uVar8 = __mulsf3(uVar8,*(undefined4 *)
                            (DAT_0019bc14 +
                             *(int *)(pCVar14 + 0x28) * 0xc +
                             *(int *)((int)&iStack_4 + iVar3) * 0xe10 + 0x19b91c));
    roundf(__x_00);
    uVar7 = Character::getRareValue(pCVar14);
    *(undefined4 *)((int)&iStack_4 + iVar3) = uVar7;
    iVar10 = Character::getSameZombiePowerupNum(pCVar14);
    __fixsfsi(uVar8);
    __fixsfsi(*(undefined4 *)
               (DAT_0019bc18 + iVar10 * 0xc + *(int *)((int)&iStack_4 + iVar3) * 0x3c + 0x19b9c2));
    String::valueOf((int)(&stack0x000000a0 + iVar3));
    StringBuffer::append(&stack0x0000014c + iVar3,&stack0x000000a0 + iVar3);
    String::~String((String *)(&stack0x000000a0 + iVar3));
    String::String((String *)(&stack0x000000a8 + iVar3),(char *)(DAT_0019bc1c + 0x19b972));
    StringBuffer::append(&stack0x0000014c + iVar3,&stack0x000000a8 + iVar3);
    String::~String((String *)(&stack0x000000a8 + iVar3));
    Vector<String>::elementAt((int)(&stack0x000000b0 + iVar3));
    StringBuffer::append(&stack0x0000014c + iVar3,&stack0x000000b0 + iVar3);
    String::~String((String *)(&stack0x000000b0 + iVar3));
    String::valueOf((int)(&stack0x000000b8 + iVar3));
    StringBuffer::append(&stack0x0000014c + iVar3,&stack0x000000b8 + iVar3);
    String::~String((String *)(&stack0x000000b8 + iVar3));
    String::String((String *)(&stack0x000000c0 + iVar3),(char *)(DAT_0019bc28 + 0x19b9cc));
    StringBuffer::append(&stack0x0000014c + iVar3,&stack0x000000c0 + iVar3);
    String::~String((String *)(&stack0x000000c0 + iVar3));
    Vector<String>::elementAt((int)(&stack0x000000c8 + iVar3));
    StringBuffer::append(&stack0x0000014c + iVar3,&stack0x000000c8 + iVar3);
    String::~String((String *)(&stack0x000000c8 + iVar3));
    Character::getMaxEnergy();
    __fixsfsi();
    String::valueOf((int)(&stack0x000000d0 + iVar3));
    StringBuffer::append(&stack0x0000014c + iVar3,&stack0x000000d0 + iVar3);
    String::~String((String *)(&stack0x000000d0 + iVar3));
    String::String((String *)(&stack0x000000d8 + iVar3),(char *)(DAT_0019bc30 + 0x19ba2a));
    StringBuffer::append(&stack0x0000014c + iVar3,&stack0x000000d8 + iVar3);
    String::~String((String *)(&stack0x000000d8 + iVar3));
    piVar12 = *(int **)(this + 0x14);
    *(undefined4 *)((int)&iStack_4 + iVar3) = *(undefined4 *)(*piVar12 + 0x2c);
    StringBuffer::toString();
    pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
    *puVar19 = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
    *(undefined4 *)(&stack0xfffffff4 + iVar3) = 9;
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              (pTVar5,&stack0x000000e0 + iVar3,*(undefined4 *)(this + 0x18),0xffffffff);
    *(TrueTypeTextElement **)(this + 0x30) = pTVar5;
    (**(code **)((int)&iStack_4 + iVar3))(piVar12,pTVar5);
    String::~String((String *)(&stack0x000000e0 + iVar3));
    piVar15 = *(int **)((int)piVar15 + DAT_0019bc34);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0x30));
    L_PrintLog((char *)(DAT_0019bc38 + 0x19ba90),(char *)(DAT_0019bc3c + 0x19ba92));
    sprintf(&stack0x000001e8 + iVar3,(char *)(DAT_0019bc40 + 0x19baa0),*(int *)(*piVar15 + 4) + 1);
    L_PrintLog((char *)(DAT_0019bc44 + 0x19baac),&stack0x000001e8 + iVar3);
    piVar12 = *(int **)(this + 0x30);
    *(undefined4 *)((int)&iStack_4 + iVar3) = *(undefined4 *)(*piVar12 + 0x14);
    iVar10 = SmDev();
    *(undefined4 *)(&stack0x00000000 + iVar3) =
         *(undefined4 *)(DAT_0019bc48 + iVar10 * 4 + 0x19baca);
    uVar8 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar3) = uVar8;
    uVar8 = __fixsfsi(*(undefined4 *)(&stack0x00000000 + iVar3));
    *(undefined4 *)(&stack0x00000000 + iVar3) = uVar8;
    uVar8 = __fixsfsi(*(undefined4 *)
                       (DAT_0019bc4c + *(int *)(&stack0x00000004 + iVar3) * 4 + 0x19bb14));
    (**(code **)((int)&iStack_4 + iVar3))(piVar12,*(undefined4 *)(&stack0x00000000 + iVar3),uVar8);
    piVar12 = *(int **)(this + 0x14);
    *(undefined4 *)(&stack0x00000000 + iVar3) = *(undefined4 *)(*piVar12 + 0x2c);
    StringBuffer::toString();
    pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
    *puVar20 = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
    *(undefined4 *)(&stack0xfffffff4 + iVar3) = 9;
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
    uVar8 = *(undefined4 *)(this + 0x18);
    *(TrueTypeTextElement **)((int)&iStack_4 + iVar3) = pTVar5;
    TrueTypeTextElement::TrueTypeTextElement(pTVar5,&stack0x000000e8 + iVar3,uVar8,0xffffffff);
    uVar8 = *(undefined4 *)((int)&iStack_4 + iVar3);
    pcVar9 = *(code **)(&stack0x00000000 + iVar3);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)((int)&iStack_4 + iVar3);
    (*pcVar9)(piVar12,uVar8);
    String::~String((String *)(&stack0x000000e8 + iVar3));
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0x34));
    L_PrintLog((char *)(DAT_0019bc50 + 0x19bb42),(char *)(DAT_0019bc54 + 0x19bb44));
    sprintf(&stack0x000001e8 + iVar3,(char *)(DAT_0019bc58 + 0x19bb52),*(int *)(*piVar15 + 4) + 1);
    L_PrintLog((char *)(DAT_0019bc5c + 0x19bb5e),&stack0x000001e8 + iVar3);
    piVar15 = *(int **)(this + 0x34);
    *(undefined4 *)((int)&iStack_4 + iVar3) = *(undefined4 *)(*piVar15 + 0x14);
    iVar10 = SmDev();
    uVar7 = *(undefined4 *)(DAT_0019bc60 + iVar10 * 4 + 0x19bb94);
    uVar8 = SmDev();
    *(undefined4 *)(&stack0x00000000 + iVar3) = uVar8;
    uVar8 = __fixsfsi(uVar7);
    uVar7 = __fixsfsi(*(undefined4 *)
                       (DAT_0019bc64 + *(int *)(&stack0x00000000 + iVar3) * 4 + 0x19bbc4));
    (**(code **)((int)&iStack_4 + iVar3))(piVar15,uVar8,uVar7);
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x24),'\x1d','\x01',true);
    GVar1 = this[*(int *)(this + 0x20) + 0x280];
    piVar15 = *(int **)(this + 0xf0);
    *(undefined4 *)((int)&iStack_4 + iVar3) = *(undefined4 *)(*piVar15 + 0x44);
    if (GVar1 == (GameStateEarlyBird)0x0) {
      String::String((String *)(&stack0x00000108 + iVar3),(char *)(DAT_0019be60 + 0x19bc74));
      String::valueOf((int)(&stack0x00000110 + iVar3));
      String::operator+((String *)(&stack0x00000118 + iVar3),&stack0x00000108 + iVar3,
                        &stack0x00000110 + iVar3);
      Vector<String>::elementAt((int)(&stack0x00000120 + iVar3));
      String::operator+((String *)(&stack0x00000128 + iVar3),&stack0x00000118 + iVar3,
                        &stack0x00000120 + iVar3);
      (**(code **)((int)&iStack_4 + iVar3))(piVar15,&stack0x00000128 + iVar3);
      String::~String((String *)(&stack0x00000128 + iVar3));
      String::~String((String *)(&stack0x00000120 + iVar3));
      String::~String((String *)(&stack0x00000118 + iVar3));
      String::~String((String *)(&stack0x00000110 + iVar3));
      puVar2 = &stack0x00000108;
    }
    else {
      String::valueOf((int)(&stack0x000000f0 + iVar3));
      Vector<String>::elementAt((int)(&stack0x000000f8 + iVar3));
      String::operator+((String *)(&stack0x00000100 + iVar3),&stack0x000000f0 + iVar3,
                        &stack0x000000f8 + iVar3);
      (**(code **)((int)&iStack_4 + iVar3))(piVar15,&stack0x00000100 + iVar3);
      String::~String((String *)(&stack0x00000100 + iVar3));
      String::~String((String *)(&stack0x000000f8 + iVar3));
      puVar2 = &stack0x000000f0;
    }
    String::~String((String *)(puVar2 + iVar3));
    updateEarlyBirdConsole(this);
    CapcomLinkedList<String>::~CapcomLinkedList
              ((CapcomLinkedList<String> *)(&stack0x0000014c + iVar3));
    CapcomLinkedList<String>::~CapcomLinkedList
              ((CapcomLinkedList<String> *)(&stack0x00000130 + iVar3));
    String::~String((String *)(&stack0x00000028 + iVar3));
    String::~String((String *)(&stack0x00000020 + iVar3));
    String::~String((String *)(&stack0x00000010 + iVar3));
    FUN_0019be48();
    return;
  }
  iVar10 = -1;
  cVar21 = '\0';
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  FUN_0019be48();
  coprocessor_loadlong(0xf,in_cr15,in_r12);
  if (param_1 == 0 || param_1 < 0 != (bool)cVar21) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(iVar10 + 0x20))(*(undefined4 *)(this + extraout_r1_00));
  (**(code **)(**(int **)param_1 + 0x20))(*(int **)param_1,0);
  if (*(int *)(&stack0x000000f0 + iVar3) != *piVar15) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


