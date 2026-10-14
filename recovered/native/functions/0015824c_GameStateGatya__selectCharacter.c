/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015824c GameStateGatya::selectCharacter */

/* GameStateGatya::selectCharacter(int) */

void __thiscall GameStateGatya::selectCharacter(GameStateGatya *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  short sVar3;
  TrueTypeTextElement *pTVar4;
  undefined4 uVar5;
  ImageElement *this_00;
  short extraout_r1;
  code *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  char *__format;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  Character *pCVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  float __x;
  float __x_00;
  float extraout_s0;
  float fVar21;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  
  iVar2 = DAT_001583d4;
  iVar11 = DAT_001583d0 + 0x158258;
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_001583d4);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_001583d4);
  piVar18 = (int *)(&stack0xffffffec + DAT_001583d4);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_001583d4);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_001583d4);
  puVar9 = *(undefined4 **)(iVar11 + DAT_001583d8);
  *(undefined4 *)(&stack0x000002d0 + DAT_001583d4) = *puVar9;
  unSelectCharacter(this);
  iVar7 = *(int *)(this + (param_1 + 0x84) * 4 + 4);
  *(undefined4 **)(&stack0x00000010 + iVar2) = puVar9;
  *(int *)(this + 0x3c) = iVar7;
  if (iVar7 == 0) {
    iVar7 = -1;
    *(undefined4 *)(this + 0x38) = 0xffffffff;
    FUN_00158d36();
  }
  *(int *)(this + 0x38) = param_1;
  String::String((String *)(&stack0x00000018 + iVar2),
                 (String *)(**(int **)(iVar7 + 0x8c) + DAT_001583dc));
  piVar10 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar10 + 0x2c);
  String::String((String *)(&stack0x00000020 + iVar2),(String *)(&stack0x00000018 + iVar2));
  iVar7 = SmDev();
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(DAT_001583e0 + iVar7 * 4 + 0x1582c4);
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar16 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000020 + iVar2,*(undefined4 *)(this + 0x34),
             *(undefined4 *)(&stack0x00000004 + iVar2));
  *(TrueTypeTextElement **)(this + 0x40) = pTVar4;
  (**(code **)(&stack0x00000000 + iVar2))(piVar10,pTVar4);
  String::~String((String *)(&stack0x00000020 + iVar2));
  piVar10 = *(int **)(iVar11 + DAT_001583e4);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x40));
  L_PrintLog((char *)(DAT_001583e8 + 0x1582f8),(char *)(DAT_001583ec + 0x1582fa));
  sprintf(&stack0x000001d0 + iVar2,(char *)(DAT_001583f0 + 0x158308),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_001583f4 + 0x158314),&stack0x000001d0 + iVar2);
  piVar12 = *(int **)(this + 0x40);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar12 + 0x14);
  iVar7 = SmDev();
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(DAT_001583f8 + iVar7 * 4 + 0x158356);
  *(undefined4 *)(&stack0x00000008 + iVar2) = *(undefined4 *)(this + 0xf10);
  uVar5 = SmDev();
  *(undefined4 *)(&stack0x0000000c + iVar2) = uVar5;
  uVar5 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar2));
  __mulsf3(uVar5,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar5 = __fixsfsi();
  *(undefined4 *)(&stack0x00000004 + iVar2) = uVar5;
  uVar5 = __floatsisf(*(undefined4 *)
                       (DAT_001583fc + *(int *)(&stack0x0000000c + iVar2) * 4 + 0x15839c));
  __mulsf3(uVar5,*(undefined4 *)(this + DAT_00158400));
  uVar5 = __fixsfsi();
  (**(code **)(&stack0x00000000 + iVar2))(piVar12,*(undefined4 *)(&stack0x00000004 + iVar2),uVar5);
  String::String((String *)(&stack0x00000028 + iVar2));
  iVar7 = **(int **)(*(int *)(this + 0x3c) + 0x8c);
  iVar8 = (int)*(short *)(iVar7 + DAT_00158408);
  if (((**(int **)(iVar11 + DAT_00158404) == iVar8) || (**(int **)(iVar11 + DAT_0015840c) == iVar8))
     || ((*(int **)(iVar11 + DAT_0015840c))[1] == iVar8)) {
    String::String((String *)(&stack0x00000030 + iVar2),(String *)(iVar7 + DAT_00158410));
    String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x00000030 + iVar2);
    String::~String((String *)(&stack0x00000030 + iVar2));
    String::String((String *)(&stack0x00000038 + iVar2),(char *)(DAT_00158414 + 0x1583c0));
    String::operator+=((String *)(&stack0x00000028 + iVar2),&stack0x00000038 + iVar2);
    puVar1 = &stack0x00000038;
  }
  else {
    String::String((String *)(&stack0x00000040 + iVar2),(String *)(iVar7 + DAT_001587d8));
    String::operator=((String *)(&stack0x00000028 + iVar2),&stack0x00000040 + iVar2);
    puVar1 = &stack0x00000040;
  }
  String::~String((String *)(puVar1 + iVar2));
  String::String((String *)(&stack0x00000048 + iVar2),(char *)(DAT_001587dc + 0x158438));
  iVar7 = SmDev();
  MultiByteString::insertStringNextLine
            ((String *)(&stack0x00000048 + iVar2),(String *)(&stack0x00000028 + iVar2),
             *(int *)(DAT_001587e0 + iVar7 * 4 + 0x1584a4));
  piVar12 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x00000050 + iVar2),(String *)(&stack0x00000048 + iVar2));
  iVar7 = SmDev();
  *(undefined4 *)(&stack0x00000008 + iVar2) = *(undefined4 *)(DAT_001587e4 + iVar7 * 4 + 0x158480);
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar17 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  uVar5 = *(undefined4 *)(this + 0x30);
  *(TrueTypeTextElement **)(&stack0x00000000 + iVar2) = pTVar4;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000050 + iVar2,uVar5,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar5 = *(undefined4 *)(&stack0x00000000 + iVar2);
  pcVar6 = *(code **)(&stack0x00000004 + iVar2);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(&stack0x00000000 + iVar2);
  (*pcVar6)(piVar12,uVar5);
  String::~String((String *)(&stack0x00000050 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x44));
  L_PrintLog((char *)(DAT_001587e8 + 0x1584b2),(char *)(DAT_001587ec + 0x1584b4));
  sprintf(&stack0x000001d0 + iVar2,(char *)(DAT_001587f0 + 0x1584c2),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_001587f4 + 0x1584ce),&stack0x000001d0 + iVar2);
  piVar10 = *(int **)(this + 0x44);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar10 + 0x14);
  iVar7 = SmDev();
  uVar13 = *(undefined4 *)(DAT_001587f8 + iVar7 * 4 + 0x158558);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(this + 0xf10);
  uVar5 = SmDev();
  *(undefined4 *)(&stack0x00000008 + iVar2) = uVar5;
  uVar5 = __floatsisf(uVar13);
  __mulsf3(uVar5,*(undefined4 *)(&stack0x00000004 + iVar2));
  uVar5 = __fixsfsi();
  uVar13 = __floatsisf(*(undefined4 *)
                        (DAT_001587fc + *(int *)(&stack0x00000008 + iVar2) * 4 + 0x15851a));
  __mulsf3(uVar13,*(undefined4 *)(this + DAT_00158800));
  uVar13 = __fixsfsi();
  (**(code **)(&stack0x00000000 + iVar2))(piVar10,uVar5,uVar13);
  __format = (char *)(DAT_00158804 + 0x158538);
  iVar7 = (int)*(short *)(**(int **)(*(int *)(this + 0x3c) + 0x8c) + DAT_00158808);
  *(int *)(&stack0x00000000 + iVar2) = iVar7;
  sVar3 = __divsi3(iVar7,0x3c);
  __aeabi_idivmod(*(undefined4 *)(&stack0x00000000 + iVar2),0x3c);
  *piVar18 = (int)extraout_r1;
  snprintf(&stack0x00000150 + iVar2,0x80,__format,(int)sVar3);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000118 + iVar2));
  String::String((String *)(&stack0x00000058 + iVar2),(char *)(DAT_0015880c + 0x158570));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x00000058 + iVar2);
  String::~String((String *)(&stack0x00000058 + iVar2));
  String::valueOf((int)(&stack0x00000060 + iVar2));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x00000060 + iVar2);
  String::~String((String *)(&stack0x00000060 + iVar2));
  String::String((String *)(&stack0x00000068 + iVar2),(char *)(DAT_00158810 + 0x1585a4));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x00000068 + iVar2);
  String::~String((String *)(&stack0x00000068 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000070 + iVar2));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x00000070 + iVar2);
  String::~String((String *)(&stack0x00000070 + iVar2));
  String::valueOf((int)(&stack0x00000078 + iVar2));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x00000078 + iVar2);
  String::~String((String *)(&stack0x00000078 + iVar2));
  String::String((String *)(&stack0x00000080 + iVar2),(char *)(DAT_0015881c + 0x15860c));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x00000080 + iVar2);
  String::~String((String *)(&stack0x00000080 + iVar2));
  Vector<String>::elementAt((int)(&stack0x00000088 + iVar2));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x00000088 + iVar2);
  String::~String((String *)(&stack0x00000088 + iVar2));
  pCVar14 = *(Character **)(*(int *)(this + 0x3c) + 0x8c);
  sVar3 = *(short *)(*(int *)pCVar14 + DAT_00158824);
  uVar5 = Character::getRareValue(pCVar14);
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar5;
  uVar5 = __floatsisf((int)sVar3);
  uVar5 = __mulsf3(uVar5,*(undefined4 *)
                          (DAT_00158828 +
                           *(int *)(&stack0x00000000 + iVar2) * 0xe10 +
                           *(int *)(pCVar14 + 0x28) * 0xc + 0x1586ba));
  roundf(__x);
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar5;
  iVar7 = Character::getRareValue(pCVar14);
  iVar8 = Character::getSameZombiePowerupNum(pCVar14);
  __addsf3(*(undefined4 *)(&stack0x00000000 + iVar2),
           *(undefined4 *)(DAT_0015882c + iVar8 * 0xc + iVar7 * 0x3c + 0x1586d6));
  __fixsfsi();
  String::valueOf((int)(&stack0x00000090 + iVar2));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x00000090 + iVar2);
  String::~String((String *)(&stack0x00000090 + iVar2));
  String::String((String *)(&stack0x00000098 + iVar2),(char *)(DAT_00158830 + 0x1586ce));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x00000098 + iVar2);
  String::~String((String *)(&stack0x00000098 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000a0 + iVar2));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x000000a0 + iVar2);
  String::~String((String *)(&stack0x000000a0 + iVar2));
  String::String((String *)(&stack0x000000a8 + iVar2),&stack0x00000150 + iVar2);
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x000000a8 + iVar2);
  String::~String((String *)(&stack0x000000a8 + iVar2));
  String::String((String *)(&stack0x000000b0 + iVar2),(char *)(DAT_00158838 + 0x15871e));
  StringBuffer::append(&stack0x00000118 + iVar2,&stack0x000000b0 + iVar2);
  String::~String((String *)(&stack0x000000b0 + iVar2));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000134 + iVar2));
  String::String((String *)(&stack0x000000b8 + iVar2),(char *)(DAT_0015883c + 0x15873c));
  StringBuffer::append(&stack0x00000134 + iVar2,&stack0x000000b8 + iVar2);
  String::~String((String *)(&stack0x000000b8 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000c0 + iVar2));
  StringBuffer::append(&stack0x00000134 + iVar2,&stack0x000000c0 + iVar2);
  String::~String((String *)(&stack0x000000c0 + iVar2));
  pCVar14 = *(Character **)(*(int *)(this + 0x3c) + 0x8c);
  sVar3 = *(short *)(*(int *)pCVar14 + DAT_00158844);
  uVar5 = Character::getRareValue(pCVar14);
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar5;
  uVar5 = __floatsisf((int)sVar3);
  uVar5 = __mulsf3(uVar5,*(undefined4 *)
                          ((int)&DAT_001587f0 +
                          DAT_00158848 +
                          *(int *)(pCVar14 + 0x28) * 0xc +
                          *(int *)(&stack0x00000000 + iVar2) * 0xe10));
  roundf(__x_00);
  uVar13 = Character::getRareValue(pCVar14);
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar13;
  iVar7 = Character::getSameZombiePowerupNum(pCVar14);
  __fixsfsi(uVar5);
  __fixsfsi(*(undefined4 *)
             (DAT_00158bf4 + iVar7 * 0xc + *(int *)(&stack0x00000000 + iVar2) * 0x3c + 0x15888c));
  String::valueOf((int)(&stack0x000000c8 + iVar2));
  StringBuffer::append(&stack0x00000134 + iVar2,&stack0x000000c8 + iVar2);
  String::~String((String *)(&stack0x000000c8 + iVar2));
  String::String((String *)(&stack0x000000d0 + iVar2),(char *)(DAT_00158bf8 + 0x15887c));
  StringBuffer::append(&stack0x00000134 + iVar2,&stack0x000000d0 + iVar2);
  String::~String((String *)(&stack0x000000d0 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000d8 + iVar2));
  StringBuffer::append(&stack0x00000134 + iVar2,&stack0x000000d8 + iVar2);
  String::~String((String *)(&stack0x000000d8 + iVar2));
  String::valueOf((int)(&stack0x000000e0 + iVar2));
  StringBuffer::append(&stack0x00000134 + iVar2,&stack0x000000e0 + iVar2);
  String::~String((String *)(&stack0x000000e0 + iVar2));
  String::String((String *)(&stack0x000000e8 + iVar2),(char *)(DAT_00158c04 + 0x1588d6));
  StringBuffer::append(&stack0x00000134 + iVar2,&stack0x000000e8 + iVar2);
  String::~String((String *)(&stack0x000000e8 + iVar2));
  Vector<String>::elementAt((int)(&stack0x000000f0 + iVar2));
  StringBuffer::append(&stack0x00000134 + iVar2,&stack0x000000f0 + iVar2);
  String::~String((String *)(&stack0x000000f0 + iVar2));
  Character::getMaxEnergy();
  __fixsfsi();
  String::valueOf((int)(&stack0x000000f8 + iVar2));
  StringBuffer::append(&stack0x00000134 + iVar2,&stack0x000000f8 + iVar2);
  String::~String((String *)(&stack0x000000f8 + iVar2));
  String::String((String *)(&stack0x00000100 + iVar2),(char *)(DAT_00158c0c + 0x158934));
  StringBuffer::append(&stack0x00000134 + iVar2,&stack0x00000100 + iVar2);
  String::~String((String *)(&stack0x00000100 + iVar2));
  piVar10 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar10 + 0x2c);
  StringBuffer::toString();
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar19 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000108 + iVar2,*(undefined4 *)(this + 0x30),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x48) = pTVar4;
  (**(code **)(&stack0x00000000 + iVar2))(piVar10,pTVar4);
  String::~String((String *)(&stack0x00000108 + iVar2));
  piVar10 = *(int **)(iVar11 + DAT_00158c10);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x48));
  L_PrintLog((char *)(DAT_00158c14 + 0x15899a),(char *)(DAT_00158c18 + 0x15899c));
  sprintf(&stack0x000001d0 + iVar2,(char *)(DAT_00158c1c + 0x1589aa),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_00158c20 + 0x1589b6),&stack0x000001d0 + iVar2);
  piVar12 = *(int **)(this + 0x48);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar12 + 0x14);
  iVar7 = SmDev();
  uVar13 = *(undefined4 *)(DAT_00158c24 + iVar7 * 4 + 0x1589f0);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(this + 0xf10);
  uVar5 = SmDev();
  *(undefined4 *)(&stack0x00000008 + iVar2) = uVar5;
  uVar5 = __floatsisf(uVar13);
  __mulsf3(uVar5,*(undefined4 *)(&stack0x00000004 + iVar2));
  uVar5 = __fixsfsi();
  iVar7 = DAT_00158c2c;
  *(undefined4 *)(&stack0x00000004 + iVar2) = uVar5;
  uVar5 = __floatsisf(*(undefined4 *)
                       (DAT_00158c28 + *(int *)(&stack0x00000008 + iVar2) * 4 + 0x158a34));
  __mulsf3(uVar5,*(undefined4 *)(this + iVar7));
  uVar5 = __fixsfsi();
  (**(code **)(&stack0x00000000 + iVar2))(piVar12,*(undefined4 *)(&stack0x00000004 + iVar2),uVar5);
  piVar12 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
  StringBuffer::toString();
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar20 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000110 + iVar2,*(undefined4 *)(this + 0x30),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x4c) = pTVar4;
  (**(code **)(&stack0x00000000 + iVar2))(piVar12,pTVar4);
  String::~String((String *)(&stack0x00000110 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x4c));
  L_PrintLog((char *)(DAT_00158c30 + 0x158a66),(char *)(DAT_00158c34 + 0x158a68));
  sprintf(&stack0x000001d0 + iVar2,(char *)(DAT_00158c38 + 0x158a76),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_00158c3c + 0x158a82),&stack0x000001d0 + iVar2);
  piVar10 = *(int **)(this + 0x4c);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar10 + 0x14);
  iVar7 = SmDev();
  uVar13 = *(undefined4 *)(DAT_00158c40 + iVar7 * 4 + 0x158aec);
  uVar15 = *(undefined4 *)(this + 0xf10);
  uVar5 = SmDev();
  *(undefined4 *)(&stack0x00000004 + iVar2) = uVar5;
  uVar5 = __floatsisf(uVar13);
  __mulsf3(uVar5,uVar15);
  uVar5 = __fixsfsi();
  uVar13 = __floatsisf(*(undefined4 *)
                        (DAT_00158c44 + *(int *)(&stack0x00000004 + iVar2) * 4 + 0x158afc));
  __mulsf3(uVar13,*(undefined4 *)(this + DAT_00158c2c));
  uVar13 = __fixsfsi();
  (**(code **)(&stack0x00000000 + iVar2))(piVar10,uVar5,uVar13);
  if (*(int *)(this + 0x200) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x200) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x200) + 100) + 4))();
    }
    if (*(int **)(this + 0x200) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x200) + 4))();
    }
    *(undefined4 *)(this + 0x200) = 0;
  }
  iVar7 = Character::getRareValueIconIdx(*(Character **)(*(int *)(this + 0x3c) + 0x8c));
  fVar21 = extraout_s0;
  if (iVar7 != -1) {
    piVar10 = *(int **)(this + 0x14);
    iVar11 = *(int *)(this + 0xc);
    *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(*piVar10 + 0x2c);
    uVar5 = PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_00158c48),iVar7,false);
    *(undefined4 *)(&stack0x00000004 + iVar2) = uVar5;
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_00,*(CImage **)(&stack0x00000004 + iVar2),'\t',true);
    *(ImageElement **)(this + 0x200) = this_00;
    (**(code **)(&stack0x00000000 + iVar2))(piVar10,this_00);
    iVar7 = *(int *)(this + 0x1f8);
    fVar21 = (float)(**(code **)(**(int **)(this + 0x200) + 0x14))
                              (*(int **)(this + 0x200),
                               (*(int *)(iVar7 + 4) - *(int *)(iVar7 + 0xc) / 2) + 0x14,
                               (*(int *)(iVar7 + 8) - *(int *)(iVar7 + 0x10) / 2) + 0x14);
  }
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar21);
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000134 + iVar2));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000118 + iVar2));
  String::~String((String *)(&stack0x00000048 + iVar2));
  String::~String((String *)(&stack0x00000028 + iVar2));
  String::~String((String *)(&stack0x00000018 + iVar2));
  FUN_00158d36();
  return;
}


