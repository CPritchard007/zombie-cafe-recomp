/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002958c0 GameStateSpecialSale::selectInstance */

/* GameStateSpecialSale::selectInstance(int) */

void __thiscall GameStateSpecialSale::selectInstance(GameStateSpecialSale *this,int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  TrueTypeTextElement *pTVar4;
  ImageElement *pIVar5;
  undefined4 uVar6;
  Character *this_00;
  short extraout_r1;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  CharacterInstance *this_01;
  int *piVar12;
  char *__format;
  int iVar13;
  undefined4 *puVar14;
  undefined8 uVar19;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  
  iVar1 = DAT_00295c8c;
  iVar13 = DAT_00295c84 + 0x2958cc;
  puVar10 = *(undefined4 **)(iVar13 + DAT_00295c88);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_00295c8c);
  piVar15 = (int *)(&stack0xffffffec + DAT_00295c8c);
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_00295c8c);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_00295c8c);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_00295c8c);
  *(undefined4 **)(&stack0x00000010 + DAT_00295c8c) = puVar10;
  *(undefined4 *)(&stack0x00000328 + DAT_00295c8c) = *puVar10;
  unSelectInstance(this);
  this_01 = *(CharacterInstance **)(this + (param_1 + 0x88) * 4);
  *(int *)(this + 0x24) = param_1;
  *(CharacterInstance **)(this + 0x28) = this_01;
  piVar12 = *(int **)(iVar13 + DAT_00295c90);
  if (this[param_1 + 0x3b0] != (GameStateSpecialSale)0x0) {
    FUN_0029628e();
  }
  String::String((String *)(&stack0x00000014 + iVar1),
                 (String *)(**(int **)(this_01 + 0x8c) + DAT_00295c94));
  piVar11 = *(int **)(this + 0x18);
  *(int **)(&stack0x00000004 + iVar1) = piVar11;
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x2c);
  String::String((String *)(&stack0x0000001c + iVar1),(String *)(&stack0x00000014 + iVar1));
  iVar3 = SmDev();
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(DAT_00295c98 + iVar3 * 4 + 0x29593a);
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  uVar7 = *(undefined4 *)(this + 0x20);
  *puVar14 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(TrueTypeTextElement **)(&stack0x00000000 + iVar1) = pTVar4;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x0000001c + iVar1,uVar7,*(undefined4 *)(&stack0x0000000c + iVar1));
  uVar7 = *(undefined4 *)(&stack0x00000000 + iVar1);
  pcVar8 = *(code **)(&stack0x00000008 + iVar1);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(&stack0x00000000 + iVar1);
  (*pcVar8)(*(undefined4 *)(&stack0x00000004 + iVar1),uVar7);
  String::~String((String *)(&stack0x0000001c + iVar1));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x30));
  L_PrintLog((char *)(DAT_00295c9c + 0x295974),(char *)(DAT_00295ca0 + 0x295976));
  sprintf(&stack0x00000228 + iVar1,(char *)(DAT_00295ca4 + 0x295984),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_00295ca8 + 0x295990),&stack0x00000228 + iVar1);
  piVar12 = *(int **)(this + 0x30);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar12 + 0x14);
  iVar3 = SmDev();
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_00295cac + iVar3 * 4 + 0x295a0e);
  iVar3 = SmDev();
  (**(code **)(&stack0x00000000 + iVar1))
            (piVar12,*(undefined4 *)(&stack0x00000004 + iVar1),
             *(undefined4 *)(iVar3 * 4 + DAT_00295cb0 + 0x2959b8));
  CapcomApp::getInstance();
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = Character::getRareValueIconIdx(*(Character **)(this_01 + 0x8c));
  if (iVar3 != -1) {
    piVar12 = *(int **)(this + 0x18);
    iVar9 = *(int *)(this + 0xc);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar12 + 0x2c);
    uVar7 = PackedImage::getImage(*(PackedImage **)(iVar9 + DAT_00295cb4),iVar3,false);
    *(undefined4 *)(&stack0x0000000c + iVar1) = uVar7;
    pIVar5 = (ImageElement *)operator_new(0x98);
    *(ImageElement **)(&stack0x00000000 + iVar1) = pIVar5;
    ImageElement::ImageElement(pIVar5,*(CImage **)(&stack0x0000000c + iVar1),'!',true);
    pcVar8 = *(code **)(&stack0x00000008 + iVar1);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(&stack0x00000000 + iVar1);
    (*pcVar8)(piVar12);
    uVar19 = __mulsf3(*(undefined4 *)(&stack0x00000004 + iVar1),DAT_00295cb8);
    ImageElement::setScale
              (*(ImageElement **)(this + 0x60),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    iVar9 = *(int *)(this + 0x30);
    uVar7 = **(undefined4 **)(this + 0x60);
    *(undefined4 **)(&stack0x00000000 + iVar1) = *(undefined4 **)(this + 0x60);
    iVar3 = *(int *)(iVar9 + 0xc);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar7;
    uVar7 = __floatsisf(*(int *)(iVar9 + 4) - iVar3 / 2);
    *(undefined4 *)(&stack0x0000000c + iVar1) = uVar7;
    uVar7 = __mulsf3(*(undefined4 *)(&stack0x00000004 + iVar1),0x41800000);
    __subsf3(*(undefined4 *)(&stack0x0000000c + iVar1),uVar7);
    uVar7 = __fixsfsi();
    *(undefined4 *)(&stack0x0000000c + iVar1) = uVar7;
    uVar7 = __floatsisf(*(undefined4 *)(iVar9 + 8));
    uVar6 = __mulsf3(*(undefined4 *)(&stack0x00000004 + iVar1),DAT_00295cbc);
    __addsf3(uVar7,uVar6);
    uVar7 = __fixsfsi();
    (**(code **)(*(int *)(&stack0x00000008 + iVar1) + 0x14))
              (*(undefined4 *)(&stack0x00000000 + iVar1),*(undefined4 *)(&stack0x0000000c + iVar1),
               uVar7);
  }
  __format = (char *)(DAT_00295cc0 + 0x295a8a);
  sVar2 = *(short *)(**(int **)(this_01 + 0x8c) + DAT_00295cc4);
  *(int *)(&stack0x00000004 + iVar1) = (int)sVar2;
  sVar2 = __divsi3((int)sVar2,0x3c);
  *(int *)(&stack0x00000000 + iVar1) = (int)sVar2;
  __aeabi_idivmod(*(undefined4 *)(&stack0x00000004 + iVar1),0x3c);
  *piVar15 = (int)extraout_r1;
  snprintf(&stack0x000001a8 + iVar1,0x80,__format,*(undefined4 *)(&stack0x00000000 + iVar1));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000154 + iVar1));
  String::String((String *)(&stack0x00000024 + iVar1),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(iVar13 + DAT_00295cc8) * 8));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x00000024 + iVar1);
  String::~String((String *)(&stack0x00000024 + iVar1));
  String::String((String *)(&stack0x0000002c + iVar1),(char *)(DAT_00295ccc + 0x295ae8));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x0000002c + iVar1);
  String::~String((String *)(&stack0x0000002c + iVar1));
  String::valueOf((int)(&stack0x00000034 + iVar1));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x00000034 + iVar1);
  String::~String((String *)(&stack0x00000034 + iVar1));
  String::String((String *)(&stack0x0000003c + iVar1),(char *)(DAT_00295cd0 + 0x295b1c));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x0000003c + iVar1);
  String::~String((String *)(&stack0x0000003c + iVar1));
  String::String((String *)(&stack0x00000044 + iVar1),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(iVar13 + DAT_00295cd4) * 8));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x00000044 + iVar1);
  String::~String((String *)(&stack0x00000044 + iVar1));
  this_00 = *(Character **)(this_01 + 0x8c);
  *(uint *)(&stack0x00000000 + iVar1) = (uint)*(ushort *)(*(int *)this_00 + DAT_00295cd8);
  Character::getAdditionCharisma(this_00);
  String::valueOf((int)(&stack0x0000004c + iVar1));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x0000004c + iVar1);
  String::~String((String *)(&stack0x0000004c + iVar1));
  String::String((String *)(&stack0x00000054 + iVar1),(char *)(DAT_00295cdc + 0x295b90));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x00000054 + iVar1);
  String::~String((String *)(&stack0x00000054 + iVar1));
  String::String((String *)(&stack0x0000005c + iVar1),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(iVar13 + DAT_00295ce0) * 8));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x0000005c + iVar1);
  String::~String((String *)(&stack0x0000005c + iVar1));
  Character::getAttackPower();
  String::valueOf((int)(&stack0x00000064 + iVar1));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x00000064 + iVar1);
  String::~String((String *)(&stack0x00000064 + iVar1));
  String::String((String *)(&stack0x0000006c + iVar1),(char *)(DAT_00295ce4 + 0x295bec));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x0000006c + iVar1);
  String::~String((String *)(&stack0x0000006c + iVar1));
  String::String((String *)(&stack0x00000074 + iVar1),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(iVar13 + DAT_00295ce8) * 8));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x00000074 + iVar1);
  String::~String((String *)(&stack0x00000074 + iVar1));
  String::String((String *)(&stack0x0000007c + iVar1),&stack0x000001a8 + iVar1);
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x0000007c + iVar1);
  String::~String((String *)(&stack0x0000007c + iVar1));
  String::String((String *)(&stack0x00000084 + iVar1),(char *)(DAT_00295cec + 0x295c42));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x00000084 + iVar1);
  String::~String((String *)(&stack0x00000084 + iVar1));
  String::String((String *)(&stack0x0000008c + iVar1),(char *)(DAT_00295cf0 + 0x295c5a));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x0000008c + iVar1);
  String::~String((String *)(&stack0x0000008c + iVar1));
  String::String((String *)(&stack0x00000094 + iVar1),(char *)(DAT_00295cf4 + 0x295c72));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x00000094 + iVar1);
  String::~String((String *)(&stack0x00000094 + iVar1));
  String::String((String *)(&stack0x0000009c + iVar1),(char *)(DAT_002960bc + 0x295d00));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x0000009c + iVar1);
  String::~String((String *)(&stack0x0000009c + iVar1));
  String::String((String *)(&stack0x000000a4 + iVar1),(char *)(DAT_002960c0 + 0x295d18));
  StringBuffer::append(&stack0x00000154 + iVar1,&stack0x000000a4 + iVar1);
  String::~String((String *)(&stack0x000000a4 + iVar1));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000170 + iVar1));
  String::String((String *)(&stack0x000000ac + iVar1),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(iVar13 + DAT_002960c4) * 8));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000ac + iVar1);
  String::~String((String *)(&stack0x000000ac + iVar1));
  Character::getSpeedParam();
  String::valueOf((int)(&stack0x000000b4 + iVar1));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000b4 + iVar1);
  String::~String((String *)(&stack0x000000b4 + iVar1));
  String::String((String *)(&stack0x000000bc + iVar1),(char *)(DAT_002960c8 + 0x295d7a));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000bc + iVar1);
  String::~String((String *)(&stack0x000000bc + iVar1));
  String::String((String *)(&stack0x000000c4 + iVar1),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(iVar13 + DAT_002960cc) * 8));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000c4 + iVar1);
  String::~String((String *)(&stack0x000000c4 + iVar1));
  Character::getAdditionFocus(*(Character **)(this_01 + 0x8c));
  String::valueOf((int)(&stack0x000000cc + iVar1));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000cc + iVar1);
  String::~String((String *)(&stack0x000000cc + iVar1));
  String::String((String *)(&stack0x000000d4 + iVar1),(char *)(DAT_002960d4 + 0x295de0));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000d4 + iVar1);
  String::~String((String *)(&stack0x000000d4 + iVar1));
  String::String((String *)(&stack0x000000dc + iVar1),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(iVar13 + DAT_002960d8) * 8));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000dc + iVar1);
  String::~String((String *)(&stack0x000000dc + iVar1));
  Character::getMaxEnergy();
  __fixsfsi();
  String::valueOf((int)(&stack0x000000e4 + iVar1));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000e4 + iVar1);
  String::~String((String *)(&stack0x000000e4 + iVar1));
  String::String((String *)(&stack0x000000ec + iVar1),(char *)(DAT_002960dc + 0x295e44));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000ec + iVar1);
  String::~String((String *)(&stack0x000000ec + iVar1));
  Character::getMaxEnergy();
  __fixsfsi();
  String::valueOf((int)(&stack0x000000f4 + iVar1));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000f4 + iVar1);
  String::~String((String *)(&stack0x000000f4 + iVar1));
  String::String((String *)(&stack0x000000fc + iVar1),(char *)(DAT_002960e0 + 0x295e80));
  StringBuffer::append(&stack0x00000170 + iVar1,&stack0x000000fc + iVar1);
  String::~String((String *)(&stack0x000000fc + iVar1));
  piVar12 = *(int **)(this + 0x18);
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(*piVar12 + 0x2c);
  StringBuffer::toString();
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  uVar7 = *(undefined4 *)(this + 0x1c);
  *puVar16 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(TrueTypeTextElement **)(&stack0x00000000 + iVar1) = pTVar4;
  TrueTypeTextElement::TrueTypeTextElement(pTVar4,&stack0x00000104 + iVar1,uVar7,0xffffffff);
  pcVar8 = *(code **)(&stack0x00000004 + iVar1);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(&stack0x00000000 + iVar1);
  (*pcVar8)(piVar12);
  String::~String((String *)(&stack0x00000104 + iVar1));
  piVar11 = *(int **)(iVar13 + DAT_002960e4);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x38));
  L_PrintLog((char *)(DAT_002960e8 + 0x295ee6),(char *)(DAT_002960ec + 0x295ee8));
  sprintf(&stack0x00000228 + iVar1,(char *)(DAT_002960f0 + 0x295ef6),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_002960f4 + 0x295f02),&stack0x00000228 + iVar1);
  piVar12 = *(int **)(this + 0x38);
  *(int **)(&stack0x00000000 + iVar1) = piVar12;
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(*piVar12 + 0x14);
  iVar3 = SmDev();
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(DAT_002960f8 + iVar3 * 4 + 0x295f62);
  iVar3 = SmDev();
  (**(code **)(&stack0x00000004 + iVar1))
            (*(undefined4 *)(&stack0x00000000 + iVar1),*(undefined4 *)(&stack0x00000008 + iVar1),
             *(undefined4 *)(DAT_002960fc + iVar3 * 4 + 0x295fa4));
  iVar3 = **(int **)(this + 0x18);
  *(int **)(&stack0x00000004 + iVar1) = *(int **)(this + 0x18);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(iVar3 + 0x2c);
  StringBuffer::toString();
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  uVar7 = *(undefined4 *)(this + 0x1c);
  *puVar17 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(TrueTypeTextElement **)(&stack0x00000000 + iVar1) = pTVar4;
  TrueTypeTextElement::TrueTypeTextElement(pTVar4,&stack0x0000010c + iVar1,uVar7,0xffffffff);
  uVar7 = *(undefined4 *)(&stack0x00000004 + iVar1);
  pcVar8 = *(code **)(&stack0x00000008 + iVar1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(&stack0x00000000 + iVar1);
  (*pcVar8)(uVar7);
  String::~String((String *)(&stack0x0000010c + iVar1));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x3c));
  L_PrintLog((char *)(DAT_00296100 + 0x295f88),(char *)(DAT_00296104 + 0x295f8a));
  sprintf(&stack0x00000228 + iVar1,(char *)(DAT_00296108 + 0x295f98),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_0029610c + 0x295fa4),&stack0x00000228 + iVar1);
  piVar12 = *(int **)(this + 0x3c);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar12 + 0x14);
  iVar3 = SmDev();
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_00296110 + iVar3 * 4 + 0x29601a);
  iVar3 = SmDev();
  (**(code **)(&stack0x00000000 + iVar1))
            (piVar12,*(undefined4 *)(&stack0x00000004 + iVar1),
             *(undefined4 *)(DAT_00296114 + iVar3 * 4 + 0x296044));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x0000018c + iVar1));
  String::String((String *)(&stack0x00000114 + iVar1),
                 (String *)
                 (DAT_00296118 + 0x29600c + (uint)*(byte *)(*(int *)(this_01 + 0x8c) + 0x36) * 0x24)
                );
  StringBuffer::append(&stack0x0000018c + iVar1,&stack0x00000114 + iVar1);
  String::~String((String *)(&stack0x00000114 + iVar1));
  String::String((String *)(&stack0x0000011c + iVar1),(char *)(DAT_0029611c + 0x29600c));
  StringBuffer::append(&stack0x0000018c + iVar1,&stack0x0000011c + iVar1);
  String::~String((String *)(&stack0x0000011c + iVar1));
  String::String((String *)(&stack0x00000124 + iVar1),
                 (String *)
                 (DAT_00296120 + 0x29602e +
                 (*(uint *)(*(int *)(this_01 + 0x8c) + 0x58) & 0xff) * 0x24));
  StringBuffer::append(&stack0x0000018c + iVar1,&stack0x00000124 + iVar1);
  String::~String((String *)(&stack0x00000124 + iVar1));
  String::String((String *)(&stack0x0000012c + iVar1),(char *)(DAT_00296124 + 0x29604e));
  StringBuffer::append(&stack0x0000018c + iVar1,&stack0x0000012c + iVar1);
  String::~String((String *)(&stack0x0000012c + iVar1));
  piVar12 = *(int **)(this + 0x18);
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(*piVar12 + 0x2c);
  StringBuffer::toString();
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *(TrueTypeTextElement **)(&stack0x00000000 + iVar1) = pTVar4;
  uVar7 = *(undefined4 *)(this + 0x1c);
  uVar6 = **(undefined4 **)(iVar13 + DAT_00296128);
  *puVar18 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement(pTVar4,&stack0x00000134 + iVar1,uVar7,uVar6);
  uVar7 = *(undefined4 *)(&stack0x00000000 + iVar1);
  pcVar8 = *(code **)(&stack0x00000004 + iVar1);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(&stack0x00000000 + iVar1);
  (*pcVar8)(piVar12,uVar7);
  String::~String((String *)(&stack0x00000134 + iVar1));
  piVar12 = *(int **)(iVar13 + DAT_002960e4);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x40));
  L_PrintLog((char *)(DAT_0029612c + 0x2960b8),&UNK_002960ba + DAT_00296130);
  sprintf(&stack0x00000228 + iVar1,(char *)(DAT_002964c8 + 0x296144),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_002964cc + 0x296150),&stack0x00000228 + iVar1);
  piVar12 = *(int **)(this + 0x40);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar12 + 0x14);
  iVar13 = SmDev();
  uVar7 = *(undefined4 *)(DAT_002964d0 + iVar13 * 4 + 0x296176);
  iVar13 = SmDev();
  (**(code **)(&stack0x00000000 + iVar1))
            (piVar12,uVar7,*(undefined4 *)(DAT_002964d4 + iVar13 * 4 + 0x29619e));
  if (*(int *)(this + 0x5c) != 0) {
    (**(code **)(**(int **)(this + 0x18) + 0x34))();
    if (*(int **)(*(int *)(this + 0x5c) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x5c) + 100) + 4))();
    }
    if (*(int **)(this + 0x5c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x5c) + 4))();
    }
    *(undefined4 *)(this + 0x5c) = 0;
  }
  iVar13 = ZombieCafe::getSpecialAttackUnit
                     (*(ZombieCafe **)(this + 0xc),
                      (uint)*(ushort *)(**(int **)(this_01 + 0x8c) + DAT_002964d8));
  if (iVar13 == 0) goto LAB_0029626c;
  piVar12 = *(int **)(this + 0x18);
  iVar3 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar12 + 0x2c);
  if (iVar13 == 3) {
    uVar7 = PackedImage::getImage(*(PackedImage **)(iVar3 + DAT_002964dc),DAT_002964e0,false);
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar7;
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,*(CImage **)(&stack0x00000004 + iVar1),'!',true);
LAB_0029623e:
    *(ImageElement **)(this + 0x5c) = pIVar5;
    (**(code **)(&stack0x00000000 + iVar1))(piVar12,pIVar5);
  }
  else {
    if (iVar13 != 2) {
      uVar7 = PackedImage::getImage(*(PackedImage **)(iVar3 + DAT_002964dc),DAT_002964e4,false);
      *(undefined4 *)(&stack0x00000004 + iVar1) = uVar7;
      pIVar5 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar5,*(CImage **)(&stack0x00000004 + iVar1),'!',true);
      goto LAB_0029623e;
    }
    uVar7 = PackedImage::getImage(*(PackedImage **)(iVar3 + DAT_002964dc),0x10e,false);
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar7;
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,*(CImage **)(&stack0x00000004 + iVar1),'!',true);
    *(ImageElement **)(this + 0x5c) = pIVar5;
    (**(code **)(&stack0x00000000 + iVar1))(piVar12,pIVar5);
  }
  iVar13 = *(int *)(this + 0x50);
  (**(code **)(**(int **)(this + 0x5c) + 0x14))
            (*(int **)(this + 0x5c),*(int *)(iVar13 + 0xc) / 2 + *(int *)(iVar13 + 4),
             (*(int *)(iVar13 + 8) - *(int *)(iVar13 + 0x10) / 2) + 0x14);
LAB_0029626c:
  CharacterInstance::setCurrentAnimation(this_01,'\x01','\x01',true);
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x0000018c + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000170 + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000154 + iVar1));
  String::~String((String *)(&stack0x00000014 + iVar1));
  if (*(int *)(&stack0x00000328 + iVar1) == **(int **)(&stack0x00000010 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


