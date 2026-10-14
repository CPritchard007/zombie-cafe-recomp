/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c8898 GameStateZukan::selectCharacter */

/* GameStateZukan::selectCharacter(int) */

void __thiscall GameStateZukan::selectCharacter(GameStateZukan *this,int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  BitmapTextElement *pBVar7;
  TrueTypeTextElement *pTVar8;
  ImageElement *this_00;
  undefined4 uVar9;
  uchar uVar10;
  short extraout_r1;
  String *pSVar11;
  int extraout_r1_00;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  GameStateZukan *pGVar16;
  ScreenElement *pSVar17;
  char *__format;
  CharacterInstance *this_01;
  int iVar18;
  code *pcVar19;
  Character *pCVar20;
  undefined4 *puVar21;
  float fVar25;
  float __x;
  float __x_00;
  undefined4 uStack_4;
  undefined4 *puVar22;
  int *piVar23;
  undefined4 *puVar24;
  
  iVar3 = DAT_001c89a8;
  iVar18 = DAT_001c89a0 + 0x1c88a4;
  puVar12 = *(undefined4 **)(iVar18 + DAT_001c89a4);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_001c89a8);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_001c89a8);
  piVar23 = (int *)(&stack0xffffffec + DAT_001c89a8);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_001c89a8);
  *(undefined4 **)(&stack0x00000010 + DAT_001c89a8) = puVar12;
  *(undefined4 *)(&stack0x00000328 + DAT_001c89a8) = *puVar12;
  *(int *)(this + 0x80) = param_1;
  *(int *)(this + 0x88) = param_1;
  releaseSelectCharacter(this);
  piVar5 = *(int **)(this + 0xc4);
  (**(code **)(*piVar5 + 0x20))(piVar5,0);
  iVar13 = *(int *)(this + 0x88);
  if ((int)(uint)*(ushort *)(*(int *)(this + 0xc) + DAT_001c89ac) <= iVar13) {
    FUN_001c96e6();
  }
  if (iVar13 < 0) {
    FUN_001c96e6();
  }
  bVar1 = *(byte *)(*(int *)(this + 0xe0) + iVar13);
  *(uint *)(&stack0x00000004 + iVar3) = (uint)bVar1;
  if (bVar1 == 3) {
    piVar5 = *(int **)(this + 0xc4);
    (**(code **)(*piVar5 + 0x20))(piVar5,1);
  }
  iVar13 = SmDev();
  iVar14 = *(int *)(iVar18 + DAT_001c89b0);
  *(undefined4 *)(&stack0x0000000c + iVar3) = *(undefined4 *)(iVar13 * 4 + iVar14);
  uVar6 = ScreenElement::globalToLocalCoords(*(ScreenElement **)(this + 0x34),0);
  *(undefined4 *)(&stack0x00000020 + iVar3) = uVar6;
  iVar13 = SmDev();
  *(undefined4 *)(&stack0x0000001c + iVar3) = *(undefined4 *)(iVar13 * 4 + iVar14);
  iVar13 = SmDev();
  fVar25 = (float)__mulsf3(*(undefined4 *)((int)&DAT_001c89a4 + DAT_001c89b4 + iVar13 * 4),
                           *(undefined4 *)(this + 0x18));
  iVar13 = createCharacterInstance((int)this,fVar25);
  iVar14 = *(int *)(&stack0x00000004 + iVar3);
  *(int *)(this + 0xb0) = iVar13;
  if ((iVar14 << 0x1e < 0) && (this[0x7c] != (GameStateZukan)0x0)) {
    *(undefined1 *)(*(int *)(iVar13 + 0x8c) + 4) = 1;
    this[0x7c] = (GameStateZukan)0x1;
  }
  else {
    *(undefined1 *)(*(int *)(iVar13 + 0x8c) + 4) = 0;
    this[0x7c] = (GameStateZukan)0x0;
  }
  setButtonText(this);
  String::String((String *)(&stack0x00000024 + iVar3),
                 (String *)(**(int **)(*(int *)(this + 0xb0) + 0x8c) + DAT_001c89b8));
  puVar12 = (undefined4 *)(*(int *)(this + 0xb0) + 0x8c);
  if (this[0x7c] == (GameStateZukan)0x0) {
    pSVar11 = (String *)(*(int *)*puVar12 + 0xb10);
  }
  else {
    pSVar11 = (String *)(*(int *)*puVar12 + DAT_001c89bc);
  }
  String::String((String *)(&stack0x0000002c + iVar3),pSVar11);
  piVar5 = *(int **)(this + 0x1c);
  *(undefined4 *)(&stack0x00000014 + iVar3) = *(undefined4 *)(*piVar5 + 0x2c);
  String::String((String *)(&stack0x00000034 + iVar3),(String *)(&stack0x00000024 + iVar3));
  iVar14 = *(int *)(this + 0xc);
  iVar13 = SmDev();
  *(undefined4 *)(&stack0x00000018 + iVar3) =
       *(undefined4 *)((*(int *)(DAT_001c8d9c + iVar13 * 4 + 0x1c89fa) + 0x136) * 4 + iVar14);
  iVar13 = SmDev();
  uVar15 = *(uint *)(DAT_001c8da0 + iVar13 * 4 + 0x1c8a2a);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  *puVar21 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0x12;
  *(undefined4 *)((int)&uStack_4 + iVar3) = 1;
  *(BitmapTextElement **)(&stack0x00000008 + iVar3) = pBVar7;
  *(uint *)(&stack0xfffffff8 + iVar3) = uVar15 & 0xff;
  BitmapTextElement::BitmapTextElement
            (pBVar7,&stack0x00000034 + iVar3,*(undefined4 *)(&stack0x00000018 + iVar3),0xffffffff);
  pGVar16 = this + 0xb4;
  *(undefined4 *)pGVar16 = *(undefined4 *)(&stack0x00000008 + iVar3);
  (**(code **)(&stack0x00000014 + iVar3))(piVar5,*(undefined4 *)(&stack0x00000008 + iVar3));
  String::~String((String *)(&stack0x00000034 + iVar3));
  *(undefined1 *)(*(int *)pGVar16 + 0x7f) = 0x11;
  piVar5 = *(int **)pGVar16;
  pcVar19 = *(code **)(*piVar5 + 0x18);
  iVar13 = SmDev();
  (*pcVar19)(piVar5,*(undefined4 *)(iVar13 * 4 + *(int *)(iVar18 + DAT_001c8da4)),200);
  pSVar17 = *(ScreenElement **)(this + 0x34);
  *(undefined4 *)(&stack0x00000014 + iVar3) = *(undefined4 *)(this + 0xb4);
  iVar13 = *(int *)(pSVar17 + 0xc);
  uVar6 = SmDev();
  *(undefined4 *)(&stack0x00000018 + iVar3) = uVar6;
  uVar6 = __floatsisf(*(int *)(&stack0x0000000c + iVar3) +
                      ((int)(short)*(undefined4 *)(&stack0x00000020 + iVar3) -
                      *(int *)(&stack0x0000001c + iVar3)) / 2);
  *(undefined4 *)(&stack0x00000008 + iVar3) = uVar6;
  __addsf3(*(undefined4 *)(&stack0x00000008 + iVar3),
           *(undefined4 *)(DAT_001c8da8 + *(int *)(&stack0x00000018 + iVar3) * 4 + 0x1c8ac0));
  uVar15 = __fixsfsi();
  uVar6 = ScreenElement::localToGlobalCoords(pSVar17,iVar13 / 2 << 0x10 | uVar15 & 0xffff);
  FUN_001c7944(*(undefined4 *)(&stack0x00000014 + iVar3),uVar6);
  iVar13 = Character::getRareValue(*(Character **)(*(int *)(this + 0xb0) + 0x8c));
  if ((3 < iVar13) && (*(int *)(&stack0x00000004 + iVar3) == 0)) {
    piVar5 = *(int **)(this + 0xb4);
    pcVar19 = *(code **)(*piVar5 + 0x44);
    Vector<String>::elementAt((int)(&stack0x0000003c + iVar3));
    (*pcVar19)(piVar5,&stack0x0000003c + iVar3);
    String::~String((String *)(&stack0x0000003c + iVar3));
  }
  String::String((String *)(&stack0x00000044 + iVar3),(char *)(DAT_001c8db0 + 0x1c8b0c));
  if (*(int *)(&stack0x00000004 + iVar3) == 0) {
    Vector<String>::elementAt((int)(&stack0x0000004c + iVar3));
    String::operator=((String *)(&stack0x0000002c + iVar3),&stack0x0000004c + iVar3);
    String::~String((String *)(&stack0x0000004c + iVar3));
  }
  MultiByteString::insertStringNextLine
            ((String *)(&stack0x00000044 + iVar3),(String *)(&stack0x0000002c + iVar3),0xd);
  piVar5 = *(int **)(this + 0x1c);
  *(undefined4 *)(&stack0x0000000c + iVar3) = *(undefined4 *)(*piVar5 + 0x2c);
  String::String((String *)(&stack0x00000054 + iVar3),(String *)(&stack0x00000044 + iVar3));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  uVar6 = *(undefined4 *)(this + 0x78);
  *puVar22 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  TrueTypeTextElement::TrueTypeTextElement(pTVar8,&stack0x00000054 + iVar3,uVar6,0xffffffff);
  *(TrueTypeTextElement **)(this + 0xbc) = pTVar8;
  (**(code **)(&stack0x0000000c + iVar3))(piVar5,pTVar8);
  String::~String((String *)(&stack0x00000054 + iVar3));
  piVar5 = *(int **)(iVar18 + DAT_001c8db8);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar5,*(TrueTypeTextElement **)(this + 0xbc));
  L_PrintLog((char *)(DAT_001c8dbc + 0x1c8b9e),(char *)(DAT_001c8dc0 + 0x1c8ba0));
  sprintf(&stack0x00000228 + iVar3,(char *)(DAT_001c8dc4 + 0x1c8bae),*(int *)(*piVar5 + 4) + 1);
  L_PrintLog((char *)(DAT_001c8dc8 + 0x1c8bba),&stack0x00000228 + iVar3);
  pSVar17 = *(ScreenElement **)(this + 0x34);
  *(undefined4 *)(&stack0x0000000c + iVar3) = *(undefined4 *)(this + 0xbc);
  iVar14 = *(int *)(pSVar17 + 0xc);
  iVar13 = SmDev();
  __addsf3(*(undefined4 *)(&stack0x00000008 + iVar3),
           *(undefined4 *)(DAT_001c8dcc + iVar13 * 4 + 0x1c8c0e));
  uVar15 = __fixsfsi();
  uVar6 = ScreenElement::localToGlobalCoords(pSVar17,iVar14 / 2 << 0x10 | uVar15 & 0xffff);
  FUN_001c7944(*(undefined4 *)(&stack0x0000000c + iVar3),uVar6);
  if (*(int *)(&stack0x00000004 + iVar3) == 0) {
    FUN_001c94e6();
  }
  if (*(int *)(this + 0x54) != 0) {
    (**(code **)(**(int **)(this + 0x1c) + 0x34))();
    if (*(int **)(*(int *)(this + 0x54) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x54) + 100) + 4))();
    }
    if (*(int **)(this + 0x54) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x54) + 4))();
    }
    *(undefined4 *)(this + 0x54) = 0;
  }
  iVar13 = Character::getRareValueIconIdx(*(Character **)(*(int *)(this + 0xb0) + 0x8c));
  if (iVar13 != -1) {
    piVar5 = *(int **)(this + 0x1c);
    iVar14 = *(int *)(this + 0xc);
    *(undefined4 *)(&stack0x00000004 + iVar3) = *(undefined4 *)(*piVar5 + 0x2c);
    uVar6 = PackedImage::getImage(*(PackedImage **)(iVar14 + DAT_001c8dd0),iVar13,false);
    *(undefined4 *)(&stack0x0000000c + iVar3) = uVar6;
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_00,*(CImage **)(&stack0x0000000c + iVar3),'\x11',true);
    *(ImageElement **)(this + 0x54) = this_00;
    (**(code **)(&stack0x00000004 + iVar3))(piVar5,this_00);
    *(undefined4 *)(&stack0x00000004 + iVar3) = *(undefined4 *)(this + 0x54);
    pSVar17 = *(ScreenElement **)(this + 0x34);
    iVar14 = *(int *)(pSVar17 + 0xc);
    iVar13 = SmDev();
    __addsf3(*(undefined4 *)(&stack0x00000008 + iVar3),
             *(undefined4 *)(DAT_001c8dd4 + iVar13 * 4 + 0x1c8ce6));
    uVar15 = __fixsfsi();
    uVar6 = ScreenElement::localToGlobalCoords(pSVar17,iVar14 / 2 << 0x10 | uVar15 & 0xffff);
    FUN_001c7944(*(undefined4 *)(&stack0x00000004 + iVar3),uVar6);
  }
  __format = (char *)(DAT_001c8dd8 + 0x1c8cc4);
  iVar13 = (int)*(short *)(**(int **)(*(int *)(this + 0xb0) + 0x8c) + DAT_001c8ddc);
  *(int *)(&stack0x00000004 + iVar3) = iVar13;
  sVar4 = __divsi3(iVar13,0x3c);
  __aeabi_idivmod(*(undefined4 *)(&stack0x00000004 + iVar3),0x3c);
  *piVar23 = (int)extraout_r1;
  snprintf(&stack0x000001a8 + iVar3,0x80,__format,(int)sVar4);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x0000018c + iVar3));
  Vector<String>::elementAt((int)(&stack0x0000005c + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000005c + iVar3);
  String::~String((String *)(&stack0x0000005c + iVar3));
  String::valueOf((int)(&stack0x00000064 + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000064 + iVar3);
  String::~String((String *)(&stack0x00000064 + iVar3));
  String::String((String *)(&stack0x0000006c + iVar3),(char *)(DAT_001c8de8 + 0x1c8d50));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000006c + iVar3);
  String::~String((String *)(&stack0x0000006c + iVar3));
  Vector<String>::elementAt((int)(&stack0x00000074 + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000074 + iVar3);
  String::~String((String *)(&stack0x00000074 + iVar3));
  pCVar20 = *(Character **)(*(int *)(this + 0xb0) + 0x8c);
  sVar4 = *(short *)(*(int *)pCVar20 + DAT_001c8df0);
  uVar6 = Character::getRareValue(pCVar20);
  *(undefined4 *)(&stack0x00000004 + iVar3) = uVar6;
  uVar6 = __floatsisf((int)sVar4);
  uVar6 = __mulsf3(uVar6,*(undefined4 *)
                          (DAT_001c91d0 +
                           *(int *)(&stack0x00000004 + iVar3) * 0xe10 +
                           *(int *)(pCVar20 + 0x28) * 0xc + 0x1c8e20));
  roundf(__x);
  uVar9 = Character::getRareValue(pCVar20);
  *(undefined4 *)(&stack0x00000004 + iVar3) = uVar9;
  iVar13 = Character::getSameZombiePowerupNum(pCVar20);
  __fixsfsi(uVar6);
  __fixsfsi(*(undefined4 *)
             (DAT_001c91d4 + iVar13 * 0xc + *(int *)(&stack0x00000004 + iVar3) * 0x3c + 0x1c8ec8));
  String::valueOf((int)(&stack0x0000007c + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000007c + iVar3);
  String::~String((String *)(&stack0x0000007c + iVar3));
  String::String((String *)(&stack0x00000084 + iVar3),(char *)(DAT_001c91d8 + 0x1c8e78));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000084 + iVar3);
  String::~String((String *)(&stack0x00000084 + iVar3));
  Vector<String>::elementAt((int)(&stack0x0000008c + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000008c + iVar3);
  String::~String((String *)(&stack0x0000008c + iVar3));
  pCVar20 = *(Character **)(*(int *)(this + 0xb0) + 0x8c);
  sVar4 = *(short *)(*(int *)pCVar20 + DAT_001c91e0);
  uVar6 = Character::getRareValue(pCVar20);
  *(undefined4 *)(&stack0x00000004 + iVar3) = uVar6;
  uVar6 = __floatsisf((int)sVar4);
  uVar6 = __mulsf3(uVar6,*(undefined4 *)
                          (DAT_001c91e4 +
                           *(int *)(&stack0x00000004 + iVar3) * 0xe10 +
                           *(int *)(pCVar20 + 0x28) * 0xc + 0x1c8ee8));
  roundf(__x_00);
  *(undefined4 *)(&stack0x00000004 + iVar3) = uVar6;
  iVar13 = Character::getRareValue(pCVar20);
  iVar14 = Character::getSameZombiePowerupNum(pCVar20);
  __addsf3(*(undefined4 *)(&stack0x00000004 + iVar3),
           *(undefined4 *)(DAT_001c91e8 + iVar14 * 0xc + iVar13 * 0x3c + 0x1c8f86));
  __fixsfsi();
  String::valueOf((int)(&stack0x00000094 + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000094 + iVar3);
  String::~String((String *)(&stack0x00000094 + iVar3));
  String::String((String *)(&stack0x0000009c + iVar3),(char *)(DAT_001c91ec + 0x1c8f3c));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000009c + iVar3);
  String::~String((String *)(&stack0x0000009c + iVar3));
  Vector<String>::elementAt((int)(&stack0x000000a4 + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000a4 + iVar3);
  String::~String((String *)(&stack0x000000a4 + iVar3));
  String::valueOf((int)(&stack0x000000ac + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000ac + iVar3);
  String::~String((String *)(&stack0x000000ac + iVar3));
  String::String((String *)(&stack0x000000b4 + iVar3),(char *)(DAT_001c91f8 + 0x1c8f9a));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000b4 + iVar3);
  String::~String((String *)(&stack0x000000b4 + iVar3));
  Vector<String>::elementAt((int)(&stack0x000000bc + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000bc + iVar3);
  String::~String((String *)(&stack0x000000bc + iVar3));
  String::String((String *)(&stack0x000000c4 + iVar3),&stack0x000001a8 + iVar3);
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000c4 + iVar3);
  String::~String((String *)(&stack0x000000c4 + iVar3));
  String::String((String *)(&stack0x000000cc + iVar3),(char *)(DAT_001c9200 + 0x1c8fe6));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000cc + iVar3);
  String::~String((String *)(&stack0x000000cc + iVar3));
  Vector<String>::elementAt((int)(&stack0x000000d4 + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000d4 + iVar3);
  String::~String((String *)(&stack0x000000d4 + iVar3));
  Character::getMaxEnergy();
  __fixsfsi();
  String::valueOf((int)(&stack0x000000dc + iVar3));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000dc + iVar3);
  String::~String((String *)(&stack0x000000dc + iVar3));
  iVar13 = __aeabi_fcmpeq(*(undefined4 *)(**(int **)(*(int *)(this + 0xb0) + 0x8c) + 0xb30),
                          0x3f800000);
  if (iVar13 == 0) {
    String::String((String *)(&stack0x000000e4 + iVar3),(char *)(DAT_001c9208 + 0x1c9062));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000e4 + iVar3);
    String::~String((String *)(&stack0x000000e4 + iVar3));
    Vector<String>::elementAt((int)(&stack0x000000ec + iVar3));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000ec + iVar3);
    String::~String((String *)(&stack0x000000ec + iVar3));
    String::String((String *)(&stack0x000000f4 + iVar3),(char *)(DAT_001c9210 + 0x1c9098));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000f4 + iVar3);
    String::~String((String *)(&stack0x000000f4 + iVar3));
    uVar6 = __divsf3(0x3f800000,*(undefined4 *)(**(int **)(*(int *)(this + 0xb0) + 0x8c) + 0xb30));
    __mulsf3(uVar6,DAT_001c9214);
    __fixsfsi();
    uVar6 = __floatsisf();
    uVar6 = __divsf3(uVar6,DAT_001c9214);
    uVar6 = __subsf3(0x3f800000,uVar6);
    __mulsf3(uVar6,DAT_001c9214);
    __fixsfsi();
    String::valueOf((int)(&stack0x000000fc + iVar3));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x000000fc + iVar3);
    String::~String((String *)(&stack0x000000fc + iVar3));
    String::String((String *)(&stack0x00000104 + iVar3),(char *)(DAT_001c9218 + 0x1c9104));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000104 + iVar3);
    String::~String((String *)(&stack0x00000104 + iVar3));
  }
  iVar13 = DAT_001c921c;
  iVar14 = __aeabi_fcmpeq(*(undefined4 *)(**(int **)(*(int *)(this + 0xb0) + 0x8c) + DAT_001c921c),
                          0x3f800000);
  if (iVar14 == 0) {
    String::String((String *)(&stack0x0000010c + iVar3),(char *)(DAT_001c9220 + 0x1c913a));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000010c + iVar3);
    String::~String((String *)(&stack0x0000010c + iVar3));
    Vector<String>::elementAt((int)(&stack0x00000114 + iVar3));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000114 + iVar3);
    String::~String((String *)(&stack0x00000114 + iVar3));
    String::String((String *)(&stack0x0000011c + iVar3),(char *)(DAT_001c9228 + 0x1c9170));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000011c + iVar3);
    String::~String((String *)(&stack0x0000011c + iVar3));
    uVar6 = __mulsf3(*(undefined4 *)(**(int **)(*(int *)(this + 0xb0) + 0x8c) + iVar13),DAT_001c9214
                    );
    __subsf3(uVar6,DAT_001c9214);
    __fixsfsi();
    String::valueOf((int)(&stack0x00000124 + iVar3));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000124 + iVar3);
    String::~String((String *)(&stack0x00000124 + iVar3));
    String::String((String *)(&stack0x0000012c + iVar3),(char *)(DAT_001c922c + 0x1c91bc));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000012c + iVar3);
    String::~String((String *)(&stack0x0000012c + iVar3));
  }
  uVar6 = __floatsisf(*(undefined4 *)(**(int **)(*(int *)(this + 0xb0) + 0x8c) + DAT_001c95c4));
  iVar13 = __aeabi_fcmpeq(uVar6,0x3f800000);
  if (iVar13 == 0) {
    String::String((String *)(&stack0x00000134 + iVar3),(char *)(DAT_001c95c8 + 0x1c9258));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000134 + iVar3);
    String::~String((String *)(&stack0x00000134 + iVar3));
    Vector<String>::elementAt((int)(&stack0x0000013c + iVar3));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000013c + iVar3);
    String::~String((String *)(&stack0x0000013c + iVar3));
    String::valueOf((int)(&stack0x00000144 + iVar3));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000144 + iVar3);
    String::~String((String *)(&stack0x00000144 + iVar3));
    String::String((String *)(&stack0x0000014c + iVar3),(char *)(DAT_001c95d0 + 0x1c92b4));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000014c + iVar3);
    String::~String((String *)(&stack0x0000014c + iVar3));
  }
  iVar13 = DAT_001c95d4;
  iVar14 = __aeabi_fcmpeq(*(undefined4 *)(**(int **)(*(int *)(this + 0xb0) + 0x8c) + DAT_001c95d4),
                          0x3f800000);
  if (iVar14 == 0) {
    String::String((String *)(&stack0x00000154 + iVar3),(char *)(DAT_001c95d8 + 0x1c92e8));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000154 + iVar3);
    String::~String((String *)(&stack0x00000154 + iVar3));
    Vector<String>::elementAt((int)(&stack0x0000015c + iVar3));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000015c + iVar3);
    String::~String((String *)(&stack0x0000015c + iVar3));
    String::String((String *)(&stack0x00000164 + iVar3),(char *)(DAT_001c95e0 + 0x1c9322));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000164 + iVar3);
    String::~String((String *)(&stack0x00000164 + iVar3));
    uVar6 = __mulsf3(*(undefined4 *)(**(int **)(*(int *)(this + 0xb0) + 0x8c) + iVar13),DAT_001c95e4
                    );
    __subsf3(uVar6,DAT_001c95e4);
    __fixsfsi();
    String::valueOf((int)(&stack0x0000016c + iVar3));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000016c + iVar3);
    String::~String((String *)(&stack0x0000016c + iVar3));
    String::String((String *)(&stack0x00000174 + iVar3),(char *)(DAT_001c95e8 + 0x1c936e));
    StringBuffer::append(&stack0x0000018c + iVar3,&stack0x00000174 + iVar3);
    String::~String((String *)(&stack0x00000174 + iVar3));
  }
  String::String((String *)(&stack0x0000017c + iVar3),(char *)(DAT_001c95ec + 0x1c9386));
  StringBuffer::append(&stack0x0000018c + iVar3,&stack0x0000017c + iVar3);
  String::~String((String *)(&stack0x0000017c + iVar3));
  piVar5 = *(int **)(this + 0x1c);
  *(undefined4 *)(&stack0x00000004 + iVar3) = *(undefined4 *)(*piVar5 + 0x2c);
  StringBuffer::toString();
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  uVar6 = *(undefined4 *)(this + 0x78);
  *puVar24 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  TrueTypeTextElement::TrueTypeTextElement(pTVar8,&stack0x00000184 + iVar3,uVar6,0xffffffff);
  *(TrueTypeTextElement **)(this + 0xc0) = pTVar8;
  (**(code **)(&stack0x00000004 + iVar3))(piVar5,pTVar8);
  String::~String((String *)(&stack0x00000184 + iVar3));
  piVar5 = *(int **)(iVar18 + DAT_001c95f0);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar5,*(TrueTypeTextElement **)(this + 0xc0));
  L_PrintLog((char *)(DAT_001c95f4 + 0x1c93f4),(char *)(DAT_001c95f8 + 0x1c93f6));
  sprintf(&stack0x00000228 + iVar3,(char *)(DAT_001c95fc + 0x1c9404),*(int *)(*piVar5 + 4) + 1);
  L_PrintLog((char *)(DAT_001c9600 + 0x1c9410),&stack0x00000228 + iVar3);
  pSVar17 = *(ScreenElement **)(this + 0x34);
  iVar13 = SmDev();
  iVar18 = *(int *)(DAT_001c9604 + iVar13 * 4 + 0x1c9470);
  iVar13 = SmDev();
  uVar6 = ScreenElement::localToGlobalCoords
                    (pSVar17,*(uint *)(DAT_001c9608 + iVar13 * 4 + 0x1c9498) & 0xffff |
                             iVar18 << 0x10);
  (**(code **)(**(int **)(this + 0xb0) + 0xc))(*(int **)(this + 0xb0),uVar6);
  pSVar17 = *(ScreenElement **)(this + 0x34);
  *(undefined4 *)(&stack0x00000004 + iVar3) = *(undefined4 *)(this + 0xc0);
  iVar13 = SmDev();
  uVar6 = *(undefined4 *)(DAT_001c960c + iVar13 * 4 + 0x1c946a);
  iVar13 = SmDev();
  uVar2 = *(ushort *)(DAT_001c9610 + iVar13 * 4 + 0x1c9490);
  iVar13 = __fixsfsi(uVar6);
  uVar6 = ScreenElement::localToGlobalCoords(pSVar17,iVar13 << 0x10 | (uint)uVar2);
  FUN_001c7944(*(undefined4 *)(&stack0x00000004 + iVar3),uVar6);
  pGVar16 = this + 0xb0;
  if (*(char *)(*(int *)(*(int *)pGVar16 + 0x8c) + 4) == '\x01') {
    iVar13 = arc4random();
    __aeabi_idivmod(iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f,0x14);
    this_01 = *(CharacterInstance **)pGVar16;
    uVar10 = (uchar)*(undefined4 *)(DAT_001c9614 + extraout_r1_00 * 4 + 0x1c94ee);
  }
  else {
    iVar13 = arc4random();
    this_01 = *(CharacterInstance **)pGVar16;
    uVar10 = *(uchar *)(DAT_001c9618 + ((iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f) & 3U) * 4 +
                       0x1c94de);
  }
  CharacterInstance::setCurrentAnimation(this_01,uVar10,'\x01',true);
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x0000018c + iVar3));
  String::~String((String *)(&stack0x00000044 + iVar3));
  String::~String((String *)(&stack0x0000002c + iVar3));
  String::~String((String *)(&stack0x00000024 + iVar3));
  FUN_001c96e6();
  return;
}


