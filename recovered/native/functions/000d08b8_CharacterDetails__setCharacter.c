/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d08b8 CharacterDetails::setCharacter */

/* WARNING: Control flow encountered bad instruction data */
/* CharacterDetails::setCharacter(Character*) */

void __thiscall CharacterDetails::setCharacter(CharacterDetails *this,Character *param_1)

{
  Character CVar1;
  CharacterDetails CVar2;
  undefined1 *puVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  CImage *pCVar7;
  ImageElement *pIVar8;
  CharacterPortrait *this_00;
  CharacterDetails CVar9;
  short extraout_r1;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  char *__format;
  undefined4 uVar16;
  undefined4 uVar17;
  uint *puVar18;
  float fVar22;
  undefined8 uVar23;
  int iStack_4;
  undefined1 *puVar19;
  int *piVar20;
  double *pdVar21;
  
  iVar4 = DAT_000d0b64;
  puVar18 = (uint *)(&stack0xffffffec + DAT_000d0b64);
  puVar19 = &stack0xffffffec + DAT_000d0b64;
  piVar20 = (int *)(&stack0xffffffec + DAT_000d0b64);
  pdVar21 = (double *)(&stack0xffffffec + DAT_000d0b64);
  *(int *)((int)&iStack_4 + DAT_000d0b64) = DAT_000d0b68 + 0xd08c8;
  puVar10 = *(undefined4 **)(DAT_000d0b68 + 0xd08c8 + DAT_000d0b6c);
  *(undefined4 *)(&stack0xffffffec + DAT_000d0b70 + DAT_000d0b64) = *puVar10;
  CVar1 = param_1[4];
  *(undefined4 **)(&stack0x00000010 + DAT_000d0b64) = puVar10;
  this[0xb1] = (CharacterDetails)('\x01' - (CVar1 == (Character)0x0));
  *(Character **)(this + 0x88) = param_1;
  for (iVar14 = 0; iVar14 < *(int *)(*(int *)(this + 0x78) + DAT_000d0b74 + 4) + 1;
      iVar14 = iVar14 + 1) {
    if (param_1 == *(Character **)(iVar14 * 4 + *(int *)(*(int *)(this + 0x78) + DAT_000d0b74 + 8)))
    {
      CVar9 = (CharacterDetails)0x1;
      goto LAB_000d090a;
    }
  }
  CVar9 = (CharacterDetails)0x0;
LAB_000d090a:
  (**(code **)(**(int **)(this + 0x178) + 0x20))(*(int **)(this + 0x178),0);
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  for (iVar14 = 0; iVar14 < *(int *)(*(int *)(this + 0x74) + 4) + 1; iVar14 = iVar14 + 1) {
    if (param_1 == *(Character **)(iVar14 * 4 + *(int *)(*(int *)(this + 0x74) + 8))) {
      *(int *)(this + 0x8c) = iVar14;
      break;
    }
  }
  if ((param_1 == *(Character **)(*(int *)(this + 0x78) + 0x590)) || ((bool)CVar9)) {
    CVar9 = this[0x60];
    if (CVar9 != (CharacterDetails)0x0) {
      (**(code **)(**(int **)(this + 0x178) + 0x20))(*(int **)(this + 0x178),0);
    }
    this[0x84] = (CharacterDetails)(CVar9 == (CharacterDetails)0x0);
  }
  else {
    this[0x84] = CVar9;
  }
  (**(code **)(**(int **)(this + 0x108) + 0x14))(*(int **)(this + 0x108),0,0);
  if ((param_1[5] == (Character)0x2) && (this[0x60] == (CharacterDetails)0x0)) {
    (**(code **)(*(int *)**(undefined4 **)(this + 0x138) + 0x20))
              ((int *)**(undefined4 **)(this + 0x138),1);
    uVar11 = 1;
    piVar6 = (int *)**(undefined4 **)(this + 0x13c);
    pcVar15 = *(code **)(*piVar6 + 0x20);
  }
  else {
    (**(code **)(*(int *)**(undefined4 **)(this + 0x138) + 0x20))
              ((int *)**(undefined4 **)(this + 0x138),0);
    uVar11 = 0;
    piVar6 = (int *)**(undefined4 **)(this + 0x13c);
    pcVar15 = *(code **)(*piVar6 + 0x20);
  }
  (*pcVar15)(piVar6,uVar11);
  piVar6 = *(int **)(this + 0x98);
  pcVar15 = *(code **)(*piVar6 + 0x44);
  String::String((String *)(&stack0x00000018 + iVar4),(String *)(param_1 + 8));
  (*pcVar15)(piVar6,&stack0x00000018 + iVar4);
  String::~String((String *)(&stack0x00000018 + iVar4));
  piVar6 = *(int **)(this + 0xf0);
  pcVar15 = *(code **)(*piVar6 + 0x44);
  String::String((String *)(&stack0x00000020 + iVar4),(String *)(*(int *)param_1 + DAT_000d0b78));
  (*pcVar15)(piVar6,&stack0x00000020 + iVar4);
  String::~String((String *)(&stack0x00000020 + iVar4));
  if (*(int *)(this + 0xa8) != 0) {
    (**(code **)(*(int *)this + 0x34))(this);
    piVar6 = *(int **)(*(int *)(this + 0xa8) + 100);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    if (*(int **)(this + 0xa8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa8) + 4))();
    }
    *(undefined4 *)(this + 0xa8) = 0;
  }
  if ((*(Character **)(*(int *)(this + 0x78) + 0x590) != param_1) &&
     (iVar14 = Character::getRareValueIconIdx(param_1), iVar14 != -1)) {
    iVar13 = *(int *)(this + 0x78);
    *(undefined4 *)(&stack0xfffffff4 + iVar4) = *(undefined4 *)(*(int *)this + 0x2c);
    pCVar7 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar13 + DAT_000d0b7c),iVar14,false);
    pIVar8 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar8,pCVar7,'!',true);
    *(ImageElement **)(this + 0xa8) = pIVar8;
    (**(code **)(&stack0xfffffff4 + iVar4))(this,pIVar8);
    iVar14 = *(int *)(this + 0xf0);
    piVar6 = *(int **)(this + 0xa8);
    (**(code **)(*piVar6 + 0x14))
              (piVar6,(*(int *)(iVar14 + 4) - *(int *)(iVar14 + 0xc) / 2) + -10,
               *(undefined4 *)(iVar14 + 8));
  }
  if (*(int *)(this + 0xac) != 0) {
    (**(code **)(*(int *)this + 0x34))(this);
    piVar6 = *(int **)(*(int *)(this + 0xac) + 100);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    if (*(int **)(this + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xac) + 4))();
    }
    *(undefined4 *)(this + 0xac) = 0;
  }
  iVar14 = ZombieCafe::getSpecialAttackUnit
                     (*(ZombieCafe **)(this + 0x78),
                      (uint)*(ushort *)(*(int *)param_1 + DAT_000d0b80));
  if (iVar14 == 0) goto LAB_000d0c4c;
  iVar13 = *(int *)(this + 0x78);
  *(undefined4 *)(&stack0xfffffff4 + iVar4) = *(undefined4 *)(*(int *)this + 0x2c);
  if (iVar14 == 3) {
    pCVar7 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(iVar13 + DAT_000d0b7c),DAT_000d0b84,false);
    pIVar8 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar8,pCVar7,'\t',true);
LAB_000d0ba6:
    *(ImageElement **)(this + 0xac) = pIVar8;
    (**(code **)(&stack0xfffffff4 + iVar4))(this,pIVar8);
  }
  else {
    if (iVar14 != 2) {
      pCVar7 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(iVar13 + DAT_000d0b7c),DAT_000d0e08,false);
      pIVar8 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar8,pCVar7,'\t',true);
      goto LAB_000d0ba6;
    }
    pCVar7 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar13 + DAT_000d0b7c),0x10e,false);
    pIVar8 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar8,pCVar7,'\t',true);
    *(ImageElement **)(this + 0xac) = pIVar8;
    (**(code **)(&stack0xfffffff4 + iVar4))(this,pIVar8);
  }
  iVar14 = CapcomApp::getInstance();
  iVar13 = *(int *)(this + 0x124);
  puVar10 = *(undefined4 **)(this + 0xac);
  *(undefined4 *)(&stack0xfffffff4 + iVar4) = *(undefined4 *)(iVar14 + 0x44);
  uVar11 = *puVar10;
  *(undefined4 **)(&stack0x00000004 + iVar4) = puVar10;
  iVar14 = *(int *)(iVar13 + 0xc);
  *(undefined4 *)(&stack0x00000008 + iVar4) = uVar11;
  uVar11 = __floatsisf(*(int *)(iVar13 + 4) - iVar14);
  *(undefined4 *)(&stack0x00000000 + iVar4) = uVar11;
  uVar11 = __mulsf3(*(undefined4 *)(&stack0xfffffff4 + iVar4),DAT_000d0e0c);
  __subsf3(*(undefined4 *)(&stack0x00000000 + iVar4),uVar11);
  uVar11 = __fixsfsi();
  *(undefined4 *)(&stack0x00000000 + iVar4) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar13 + 8));
  uVar16 = __mulsf3(*(undefined4 *)(&stack0xfffffff4 + iVar4),0x41800000);
  __subsf3(uVar11,uVar16);
  uVar11 = __fixsfsi();
  (**(code **)(*(int *)(&stack0x00000008 + iVar4) + 0x14))
            (*(undefined4 *)(&stack0x00000004 + iVar4),*(undefined4 *)(&stack0x00000000 + iVar4),
             uVar11);
  pIVar8 = *(ImageElement **)(this + 0xac);
  iVar14 = SmDev();
  iVar13 = DAT_000d0e10 + 0xd0c2a;
  uVar11 = __mulsf3(*(undefined4 *)(&stack0xfffffff4 + iVar4),
                    *(undefined4 *)(iVar13 + iVar14 * 4 + 0x68));
  *(undefined4 *)(&stack0x00000004 + iVar4) = uVar11;
  iVar14 = SmDev();
  uVar23 = __mulsf3(*(undefined4 *)(&stack0xfffffff4 + iVar4),
                    *(undefined4 *)(iVar13 + iVar14 * 4 + 0x68));
  ImageElement::setScale(pIVar8,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
LAB_000d0c4c:
  CVar9 = this[0x84];
  CVar2 = this[0x60];
  iVar13 = 0;
  this_00 = *(CharacterPortrait **)(this + 0x124);
  *puVar18 = (uint)(byte)this[0xb1];
  *(undefined4 *)(&stack0xfffffff0 + iVar4) = 0;
  CharacterPortrait::setCharacter
            (this_00,param_1,(bool)CVar9,(bool)CVar2,(bool)*puVar19,(bool)(&stack0xfffffff0)[iVar4])
  ;
  *(undefined4 *)(&stack0xfffffff4 + iVar4) = *(undefined4 *)(this + 0x110);
  Character::getMaxEnergy();
  iVar14 = __fixsfsi();
  ProgressBar::setMaximumValue(*(ProgressBar **)(&stack0xfffffff4 + iVar4),iVar14);
  uVar11 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(&stack0xfffffff4 + iVar4) = *(undefined4 *)(this + 0x110);
  iVar14 = __fixsfsi(uVar11);
  ProgressBar::setValue(*(ProgressBar **)(&stack0xfffffff4 + iVar4),iVar14,true);
  (**(code **)(**(int **)(this + 0x16c) + 0x20))(*(int **)(this + 0x16c),0);
  (**(code **)(**(int **)(this + 0x170) + 0x20))(*(int **)(this + 0x170),0);
  (**(code **)(**(int **)(this + 0x17c) + 0x20))(*(int **)(this + 0x17c),0);
  (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),0);
  (**(code **)(**(int **)(this + 0x180) + 0x20))(*(int **)(this + 0x180),0);
  this[0xb2] = (CharacterDetails)0x0;
  do {
    iVar14 = iVar13 + 0xb4;
    iVar13 = iVar13 + 4;
    (**(code **)(**(int **)(this + iVar14) + 0x20))(*(int **)(this + iVar14),0);
  } while (iVar13 != 0x14);
  (**(code **)(**(int **)(this + 0xf8) + 0x20))(*(int **)(this + 0xf8),0);
  piVar6 = *(int **)(this + 0xdc);
  pcVar15 = *(code **)(*piVar6 + 0x44);
  String::String((String *)(&stack0x00000028 + iVar4),(char *)(DAT_000d0e14 + 0xd0d0e));
  (*pcVar15)(piVar6,&stack0x00000028 + iVar4);
  String::~String((String *)(&stack0x00000028 + iVar4));
  piVar6 = *(int **)(this + 0xe0);
  pcVar15 = *(code **)(*piVar6 + 0x44);
  String::String((String *)(&stack0x00000030 + iVar4),
                 (String *)(DAT_000d0e18 + 0xd0d50 + (uint)(byte)param_1[0x36] * 0x24));
  (*pcVar15)(piVar6,&stack0x00000030 + iVar4);
  String::~String((String *)(&stack0x00000030 + iVar4));
  iVar14 = *(int *)((int)&iStack_4 + iVar4);
  CVar1 = param_1[5];
  *(undefined4 *)(&stack0xfffffff4 + iVar4) = *(undefined4 *)(iVar14 + DAT_000d0e1c);
  *(undefined4 *)(&stack0x00000004 + iVar4) = *(undefined4 *)(iVar14 + DAT_000d0e20);
  *(undefined4 *)(&stack0x00000008 + iVar4) = *(undefined4 *)(iVar14 + DAT_000d0e24);
  if (CVar1 != (Character)0x2) {
    FUN_000d1c8c();
  }
  String::String((String *)(&stack0x00000038 + iVar4),(char *)(DAT_000d0e28 + 0xd0d76));
  iVar14 = isEquipReleaseOne(this);
  if (((iVar14 != 0) && (this[0x68] == (CharacterDetails)0x0)) &&
     (iVar14 = Character::getRareValue(param_1),
     *(int *)(DAT_000d0e2c + iVar14 * 0x14 + 0xd0de0) <= *(int *)(param_1 + 0x28))) {
    this[0xb2] = (CharacterDetails)0x1;
    (**(code **)(**(int **)(this + 0xf8) + 0x20))();
  }
  iVar14 = *(int *)param_1;
  iVar13 = (int)*(short *)(iVar14 + DAT_000d0e30);
  if (((**(int **)(*(int *)((int)&iStack_4 + iVar4) + DAT_000d0e34) == iVar13) ||
      (piVar6 = *(int **)(*(int *)((int)&iStack_4 + iVar4) + DAT_000d0e38), *piVar6 == iVar13)) ||
     (piVar6[1] == iVar13)) {
    String::String((String *)(&stack0x00000040 + iVar4),(String *)(iVar14 + DAT_000d0e3c));
    String::operator=((String *)(&stack0x00000038 + iVar4),&stack0x00000040 + iVar4);
    String::~String((String *)(&stack0x00000040 + iVar4));
    String::String((String *)(&stack0x00000048 + iVar4),(char *)(DAT_000d0e40 + 0xd0df8));
    String::operator+=((String *)(&stack0x00000038 + iVar4),&stack0x00000048 + iVar4);
    puVar3 = &stack0x00000048;
  }
  else {
    String::String((String *)(&stack0x00000050 + iVar4),(String *)(iVar14 + DAT_000d1210));
    String::operator=((String *)(&stack0x00000038 + iVar4),&stack0x00000050 + iVar4);
    puVar3 = &stack0x00000050;
  }
  String::~String((String *)(puVar3 + iVar4));
  String::String((String *)(&stack0x00000058 + iVar4),(char *)(DAT_000d1214 + 0xd0e64));
  iVar14 = SmDev();
  MultiByteString::insertStringNextLine
            ((String *)(&stack0x00000058 + iVar4),(String *)(&stack0x00000038 + iVar4),
             *(int *)(iVar14 * 4 + DAT_000d1218 + 0xd0e74));
  piVar6 = *(int **)(this + 0xec);
  *(int **)(&stack0x00000000 + iVar4) = piVar6;
  pcVar15 = *(code **)(*piVar6 + 0x44);
  String::String((String *)(&stack0x00000060 + iVar4),(String *)(&stack0x00000058 + iVar4));
  (*pcVar15)(*(undefined4 *)(&stack0x00000000 + iVar4),&stack0x00000060 + iVar4);
  String::~String((String *)(&stack0x00000060 + iVar4));
  CVar9 = this[0x60];
  *(undefined4 *)(&stack0x0000000c + iVar4) =
       *(undefined4 *)(*(int *)((int)&iStack_4 + iVar4) + DAT_000d121c);
  if (CVar9 != (CharacterDetails)0x0) {
    FUN_000d191c();
  }
  piVar6 = *(int **)(this + 0xf8);
  *(int **)(&stack0x00000000 + iVar4) = piVar6;
  pcVar15 = *(code **)(*piVar6 + 0x44);
  String::String((String *)(&stack0x00000068 + iVar4),(char *)(DAT_000d1220 + 0xd0ec2));
  (*pcVar15)(*(undefined4 *)(&stack0x00000000 + iVar4),&stack0x00000068 + iVar4);
  String::~String((String *)(&stack0x00000068 + iVar4));
  String::String((String *)(&stack0x00000438 + iVar4),(char *)(DAT_000d1224 + 0xd0edc));
  Vector<String>::elementAt((int)(&stack0x00000070 + iVar4));
  String::String((String *)(&stack0x00000078 + iVar4),(char *)(DAT_000d1228 + 0xd0ef4));
  String::operator+((String *)(&stack0x00000080 + iVar4),&stack0x00000070 + iVar4,
                    &stack0x00000078 + iVar4);
  Vector<String>::elementAt((int)(&stack0x00000088 + iVar4));
  String::operator+((String *)(&stack0x00000090 + iVar4),&stack0x00000080 + iVar4,
                    &stack0x00000088 + iVar4);
  String::String((String *)(&stack0x00000098 + iVar4),(char *)(DAT_000d122c + 0xd0f20));
  String::operator+((String *)(&stack0x000000a0 + iVar4),&stack0x00000090 + iVar4,
                    &stack0x00000098 + iVar4);
  Vector<String>::elementAt((int)(&stack0x000000a8 + iVar4));
  String::operator+((String *)(&stack0x000000b0 + iVar4),&stack0x000000a0 + iVar4,
                    &stack0x000000a8 + iVar4);
  String::String((String *)(&stack0x000000b8 + iVar4),(char *)(DAT_000d1230 + 0xd0f4c));
  String::operator+((String *)(&stack0x000000c0 + iVar4),&stack0x000000b0 + iVar4,
                    &stack0x000000b8 + iVar4);
  Vector<String>::elementAt((int)(&stack0x000000c8 + iVar4));
  String::operator+((String *)(&stack0x000000d0 + iVar4),&stack0x000000c0 + iVar4,
                    &stack0x000000c8 + iVar4);
  String::String((String *)(&stack0x000000d8 + iVar4),(char *)(DAT_000d1234 + 0xd0f78));
  String::operator+((String *)(&stack0x000000e0 + iVar4),&stack0x000000d0 + iVar4,
                    &stack0x000000d8 + iVar4);
  Vector<String>::elementAt((int)(&stack0x000000e8 + iVar4));
  String::operator+((String *)(&stack0x000000f0 + iVar4),&stack0x000000e0 + iVar4,
                    &stack0x000000e8 + iVar4);
  String::String((String *)(&stack0x000000f8 + iVar4),(char *)(DAT_000d123c + 0xd0fa8));
  String::operator+((String *)(&stack0x00000100 + iVar4),&stack0x000000f0 + iVar4,
                    &stack0x000000f8 + iVar4);
  String::String((String *)(&stack0x00000108 + iVar4),(char *)(DAT_000d1240 + 0xd0fbc));
  String::operator+((String *)(&stack0x00000110 + iVar4),&stack0x00000100 + iVar4,
                    &stack0x00000108 + iVar4);
  Vector<String>::elementAt((int)(&stack0x00000118 + iVar4));
  String::operator+((String *)(&stack0x00000120 + iVar4),&stack0x00000110 + iVar4,
                    &stack0x00000118 + iVar4);
  String::String((String *)(&stack0x00000128 + iVar4),(char *)(DAT_000d1248 + 0xd0ff0));
  String::operator+((String *)(&stack0x00000130 + iVar4),&stack0x00000120 + iVar4,
                    &stack0x00000128 + iVar4);
  Vector<String>::elementAt((int)(&stack0x00000138 + iVar4));
  String::operator+((String *)(&stack0x00000140 + iVar4),&stack0x00000130 + iVar4,
                    &stack0x00000138 + iVar4);
  String::String((String *)(&stack0x00000148 + iVar4),(char *)(DAT_000d1250 + 0xd1020));
  String::operator+((String *)(&stack0x00000150 + iVar4),&stack0x00000140 + iVar4,
                    &stack0x00000148 + iVar4);
  Vector<String>::elementAt((int)(&stack0x00000158 + iVar4));
  String::operator+((String *)(&stack0x00000160 + iVar4),&stack0x00000150 + iVar4,
                    &stack0x00000158 + iVar4);
  String::String((String *)(&stack0x00000168 + iVar4),(char *)(DAT_000d1258 + 0xd1050));
  String::operator+((String *)(&stack0x00000170 + iVar4),&stack0x00000160 + iVar4,
                    &stack0x00000168 + iVar4);
  Vector<String>::elementAt((int)(&stack0x00000178 + iVar4));
  String::operator+((String *)(&stack0x00000180 + iVar4),&stack0x00000170 + iVar4,
                    &stack0x00000178 + iVar4);
  String::String((String *)(&stack0x00000188 + iVar4),(char *)(DAT_000d1260 + 0xd1080));
  String::operator+((String *)(&stack0x00000190 + iVar4),&stack0x00000180 + iVar4,
                    &stack0x00000188 + iVar4);
  Vector<String>::elementAt((int)(&stack0x00000198 + iVar4));
  String::operator+((String *)(&stack0x000001a0 + iVar4),&stack0x00000190 + iVar4,
                    &stack0x00000198 + iVar4);
  String::operator=((String *)(&stack0x00000438 + iVar4),&stack0x000001a0 + iVar4);
  String::~String((String *)(&stack0x000001a0 + iVar4));
  String::~String((String *)(&stack0x00000198 + iVar4));
  String::~String((String *)(&stack0x00000190 + iVar4));
  String::~String((String *)(&stack0x00000188 + iVar4));
  String::~String((String *)(&stack0x00000180 + iVar4));
  String::~String((String *)(&stack0x00000178 + iVar4));
  String::~String((String *)(&stack0x00000170 + iVar4));
  String::~String((String *)(&stack0x00000168 + iVar4));
  String::~String((String *)(&stack0x00000160 + iVar4));
  String::~String((String *)(&stack0x00000158 + iVar4));
  String::~String((String *)(&stack0x00000150 + iVar4));
  String::~String((String *)(&stack0x00000148 + iVar4));
  String::~String((String *)(&stack0x00000140 + iVar4));
  String::~String((String *)(&stack0x00000138 + iVar4));
  String::~String((String *)(&stack0x00000130 + iVar4));
  String::~String((String *)(&stack0x00000128 + iVar4));
  String::~String((String *)(&stack0x00000120 + iVar4));
  String::~String((String *)(&stack0x00000118 + iVar4));
  String::~String((String *)(&stack0x00000110 + iVar4));
  String::~String((String *)(&stack0x00000108 + iVar4));
  String::~String((String *)(&stack0x00000100 + iVar4));
  String::~String((String *)(&stack0x000000f8 + iVar4));
  String::~String((String *)(&stack0x000000f0 + iVar4));
  String::~String((String *)(&stack0x000000e8 + iVar4));
  String::~String((String *)(&stack0x000000e0 + iVar4));
  String::~String((String *)(&stack0x000000d8 + iVar4));
  String::~String((String *)(&stack0x000000d0 + iVar4));
  String::~String((String *)(&stack0x000000c8 + iVar4));
  String::~String((String *)(&stack0x000000c0 + iVar4));
  String::~String((String *)(&stack0x000000b8 + iVar4));
  String::~String((String *)(&stack0x000000b0 + iVar4));
  String::~String((String *)(&stack0x000000a8 + iVar4));
  String::~String((String *)(&stack0x000000a0 + iVar4));
  String::~String((String *)(&stack0x00000098 + iVar4));
  String::~String((String *)(&stack0x00000090 + iVar4));
  String::~String((String *)(&stack0x00000088 + iVar4));
  String::~String((String *)(&stack0x00000080 + iVar4));
  String::~String((String *)(&stack0x00000078 + iVar4));
  String::~String((String *)(&stack0x00000070 + iVar4));
  piVar6 = *(int **)(this + 0xf4);
  pcVar15 = *(code **)(*piVar6 + 0x44);
  String::String((String *)(&stack0x000001a8 + iVar4),(String *)(&stack0x00000438 + iVar4));
  (*pcVar15)(piVar6,&stack0x000001a8 + iVar4);
  String::~String((String *)(&stack0x000001a8 + iVar4));
  setEquipButtonName(this);
  piVar6 = *(int **)(this + 0x100);
  pcVar15 = *(code **)(*piVar6 + 0x44);
  String::String((String *)(&stack0x000001b0 + iVar4),(char *)(DAT_000d1268 + 0xd11d2));
  (*pcVar15)(piVar6,&stack0x000001b0 + iVar4);
  String::~String((String *)(&stack0x000001b0 + iVar4));
  sVar5 = *(short *)(*(int *)param_1 + DAT_000d126c);
  __format = (char *)(DAT_000d1270 + 0xd11ee);
  *(int *)(&stack0xfffffff4 + iVar4) = (int)sVar5;
  sVar5 = __divsi3((int)sVar5,0x3c);
  __aeabi_idivmod(*(undefined4 *)(&stack0xfffffff4 + iVar4),0x3c);
  *piVar20 = (int)extraout_r1;
  snprintf(&stack0xffffffec + DAT_000d1274 + iVar4,0x80,__format,(int)sVar5);
  String::String((String *)(&stack0x00000448 + iVar4),(char *)(DAT_000d1644 + 0xd128a));
  String::valueOf((int)(&stack0x000001b8 + iVar4));
  String::operator=((String *)(&stack0x00000448 + iVar4),&stack0x000001b8 + iVar4);
  String::~String((String *)(&stack0x000001b8 + iVar4));
  iVar14 = Character::isEquipCharismaUp(param_1);
  if (iVar14 != 0) {
    String::String((String *)(&stack0x000001c0 + iVar4),(char *)(DAT_000d164c + 0xd12c8));
    Character::getAdditionCharisma(param_1);
    String::valueOf((int)(&stack0x000001c8 + iVar4));
    String::operator+((String *)(&stack0x000001d0 + iVar4),&stack0x000001c0 + iVar4,
                      &stack0x000001c8 + iVar4);
    String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x000001d0 + iVar4);
    String::~String((String *)(&stack0x000001d0 + iVar4));
    String::~String((String *)(&stack0x000001c8 + iVar4));
    String::~String((String *)(&stack0x000001c0 + iVar4));
  }
  String::String((String *)(&stack0x000001d8 + iVar4),(char *)(DAT_000d1650 + 0xd1306));
  String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x000001d8 + iVar4);
  String::~String((String *)(&stack0x000001d8 + iVar4));
  Character::getSpeedBaseParam(param_1);
  fVar22 = (float)__floatsisf();
  roundf(fVar22);
  __fixsfsi();
  String::valueOf((int)(&stack0x000001e0 + iVar4));
  String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x000001e0 + iVar4);
  String::~String((String *)(&stack0x000001e0 + iVar4));
  iVar14 = Character::isEquipSpeedUp(param_1);
  if (iVar14 != 0) {
    String::String((String *)(&stack0x000001e8 + iVar4),(char *)(DAT_000d1654 + 0xd1354));
    Character::getAdditionSpeed(param_1);
    String::valueOf((int)(&stack0x000001f0 + iVar4));
    String::operator+((String *)(&stack0x000001f8 + iVar4),&stack0x000001e8 + iVar4,
                      &stack0x000001f0 + iVar4);
    String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x000001f8 + iVar4);
    String::~String((String *)(&stack0x000001f8 + iVar4));
    String::~String((String *)(&stack0x000001f0 + iVar4));
    String::~String((String *)(&stack0x000001e8 + iVar4));
  }
  String::String((String *)(&stack0x00000200 + iVar4),(char *)(DAT_000d1658 + 0xd1392));
  String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x00000200 + iVar4);
  String::~String((String *)(&stack0x00000200 + iVar4));
  Character::getAttackBasePower();
  fVar22 = (float)__floatsisf();
  roundf(fVar22);
  __fixsfsi();
  String::valueOf((int)(&stack0x00000208 + iVar4));
  String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x00000208 + iVar4);
  String::~String((String *)(&stack0x00000208 + iVar4));
  iVar14 = Character::isEquipAttackUp(param_1);
  if (iVar14 != 0) {
    String::String((String *)(&stack0x00000210 + iVar4),(char *)(DAT_000d165c + 0xd13e0));
    Character::getAdditionAttack(param_1);
    String::valueOf((int)(&stack0x00000218 + iVar4));
    String::operator+((String *)(&stack0x00000220 + iVar4),&stack0x00000210 + iVar4,
                      &stack0x00000218 + iVar4);
    String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x00000220 + iVar4);
    String::~String((String *)(&stack0x00000220 + iVar4));
    String::~String((String *)(&stack0x00000218 + iVar4));
    String::~String((String *)(&stack0x00000210 + iVar4));
  }
  String::String((String *)(&stack0x00000228 + iVar4),(char *)(DAT_000d1660 + 0xd141e));
  String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x00000228 + iVar4);
  String::~String((String *)(&stack0x00000228 + iVar4));
  String::valueOf((int)(&stack0x00000230 + iVar4));
  String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x00000230 + iVar4);
  String::~String((String *)(&stack0x00000230 + iVar4));
  iVar14 = Character::isEquipFocusUp(param_1);
  if (iVar14 != 0) {
    String::String((String *)(&stack0x00000238 + iVar4),(char *)(DAT_000d1668 + 0xd145e));
    Character::getAdditionFocus(param_1);
    String::valueOf((int)(&stack0x00000240 + iVar4));
    String::operator+((String *)(&stack0x00000248 + iVar4),&stack0x00000238 + iVar4,
                      &stack0x00000240 + iVar4);
    String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x00000248 + iVar4);
    String::~String((String *)(&stack0x00000248 + iVar4));
    String::~String((String *)(&stack0x00000240 + iVar4));
    String::~String((String *)(&stack0x00000238 + iVar4));
  }
  String::String((String *)(&stack0x00000250 + iVar4),(char *)(DAT_000d166c + 0xd149c));
  String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x00000250 + iVar4);
  String::~String((String *)(&stack0x00000250 + iVar4));
  String::String((String *)(&stack0x00000258 + iVar4),&stack0xffffffec + DAT_000d1670 + iVar4);
  String::String((String *)(&stack0x00000260 + iVar4),(char *)(DAT_000d1674 + 0xd14c0));
  String::operator+((String *)(&stack0x00000268 + iVar4),&stack0x00000258 + iVar4,
                    &stack0x00000260 + iVar4);
  String::String((String *)(&stack0x00000270 + iVar4),(char *)(DAT_000d1678 + 0xd14d4));
  String::operator+((String *)(&stack0x00000278 + iVar4),&stack0x00000268 + iVar4,
                    &stack0x00000270 + iVar4);
  String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x00000278 + iVar4);
  String::~String((String *)(&stack0x00000278 + iVar4));
  String::~String((String *)(&stack0x00000270 + iVar4));
  String::~String((String *)(&stack0x00000268 + iVar4));
  String::~String((String *)(&stack0x00000260 + iVar4));
  String::~String((String *)(&stack0x00000258 + iVar4));
  __floatsidf(*(undefined4 *)(param_1 + 0x10));
  Platform::getFormattedDate(*pdVar21);
  String::toUpperCase();
  String::String((String *)(&stack0x00000290 + iVar4),(char *)(DAT_000d167c + 0xd1528));
  String::operator+((String *)(&stack0x00000298 + iVar4),&stack0x00000288 + iVar4,
                    &stack0x00000290 + iVar4);
  uVar23 = Platform::getAppTime();
  *(int *)(&stack0xfffffff4 + iVar4) = (int)uVar23;
  *(int *)(&stack0xfffffff8 + iVar4) = (int)((ulonglong)uVar23 >> 0x20);
  uVar23 = __floatsidf(*(undefined4 *)(param_1 + 0x10));
  uVar23 = __subdf3(*(undefined4 *)(&stack0xfffffff4 + iVar4),
                    *(undefined4 *)(&stack0xfffffff8 + iVar4),(int)uVar23,
                    (int)((ulonglong)uVar23 >> 0x20));
  *(int *)(&stack0xfffffff4 + iVar4) = (int)uVar23;
  *(int *)(&stack0xfffffff8 + iVar4) = (int)((ulonglong)uVar23 >> 0x20);
  uVar23 = __floatsidf(**(undefined4 **)(*(int *)((int)&iStack_4 + iVar4) + DAT_000d1680));
  __divdf3(*(undefined4 *)(&stack0xfffffff4 + iVar4),*(undefined4 *)(&stack0xfffffff8 + iVar4),
           (int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
  __fixdfsi();
  String::valueOf((int)(&stack0x000002a0 + iVar4));
  String::operator+((String *)(&stack0x000002a8 + iVar4),&stack0x00000298 + iVar4,
                    &stack0x000002a0 + iVar4);
  String::String((String *)(&stack0x000002b0 + iVar4),(char *)(DAT_000d1684 + 0xd1588));
  String::operator+((String *)(&stack0x000002b8 + iVar4),&stack0x000002a8 + iVar4,
                    &stack0x000002b0 + iVar4);
  String::valueOf((int)(&stack0x000002c0 + iVar4));
  String::operator+((String *)(&stack0x000002c8 + iVar4),&stack0x000002b8 + iVar4,
                    &stack0x000002c0 + iVar4);
  String::String((String *)(&stack0x000002d0 + iVar4),(char *)(DAT_000d1688 + 0xd15ae));
  String::operator+((String *)(&stack0x000002d8 + iVar4),&stack0x000002c8 + iVar4,
                    &stack0x000002d0 + iVar4);
  String::valueOf((int)(&stack0x000002e0 + iVar4));
  String::operator+((String *)(&stack0x000002e8 + iVar4),&stack0x000002d8 + iVar4,
                    &stack0x000002e0 + iVar4);
  String::String((String *)(&stack0x000002f0 + iVar4),(char *)(DAT_000d168c + 0xd15d4));
  String::operator+((String *)(&stack0x000002f8 + iVar4),&stack0x000002e8 + iVar4,
                    &stack0x000002f0 + iVar4);
  String::valueOf((int)(&stack0x00000300 + iVar4));
  String::operator+((String *)(&stack0x00000308 + iVar4),&stack0x000002f8 + iVar4,
                    &stack0x00000300 + iVar4);
  String::operator+=((String *)(&stack0x00000448 + iVar4),&stack0x00000308 + iVar4);
  String::~String((String *)(&stack0x00000308 + iVar4));
  String::~String((String *)(&stack0x00000300 + iVar4));
  String::~String((String *)(&stack0x000002f8 + iVar4));
  String::~String((String *)(&stack0x000002f0 + iVar4));
  String::~String((String *)(&stack0x000002e8 + iVar4));
  String::~String((String *)(&stack0x000002e0 + iVar4));
  String::~String((String *)(&stack0x000002d8 + iVar4));
  String::~String((String *)(&stack0x000002d0 + iVar4));
  String::~String((String *)(&stack0x000002c8 + iVar4));
  String::~String((String *)(&stack0x000002c0 + iVar4));
  String::~String((String *)(&stack0x000002b8 + iVar4));
  String::~String((String *)(&stack0x000002b0 + iVar4));
  String::~String((String *)(&stack0x000002a8 + iVar4));
  String::~String((String *)(&stack0x000002a0 + iVar4));
  String::~String((String *)(&stack0x00000298 + iVar4));
  String::~String((String *)(&stack0x00000290 + iVar4));
  String::~String((String *)(&stack0x00000288 + iVar4));
  String::~String((String *)(&stack0x00000280 + iVar4));
  piVar6 = *(int **)(this + 0xfc);
  pcVar15 = *(code **)(*piVar6 + 0x44);
  String::String((String *)(&stack0x00000310 + iVar4),(String *)(&stack0x00000448 + iVar4));
  (*pcVar15)(piVar6,&stack0x00000310 + iVar4);
  String::~String((String *)(&stack0x00000310 + iVar4));
  piVar6 = *(int **)(this + 0xfc);
  pcVar15 = *(code **)(*piVar6 + 0x44);
  String::String((String *)(&stack0x00000318 + iVar4),(String *)(&stack0x00000448 + iVar4));
  (*pcVar15)(piVar6,&stack0x00000318 + iVar4);
  String::~String((String *)(&stack0x00000318 + iVar4));
  (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),0);
  (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),1);
  (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),1);
  iVar14 = TutorialSystem::isTutorialCompleted
                     (*(TutorialSystem **)(*(int *)(this + 0x78) + DAT_000d1904),'*');
  pcVar15 = *(code **)(**(int **)(this + 0x16c) + 0x20);
  if (iVar14 == 0) {
    (*pcVar15)();
    (**(code **)(**(int **)(this + 0x170) + 0x20))(*(int **)(this + 0x170),0);
    (**(code **)(**(int **)(this + 0x17c) + 0x20))(*(int **)(this + 0x17c),0);
  }
  else {
    CVar9 = this[0x84];
    if (CVar9 != (CharacterDetails)0x0) {
      CVar9 = this[0x174];
    }
    (*pcVar15)(*(int **)(this + 0x16c),CVar9);
    CVar9 = this[0x84];
    if (CVar9 != (CharacterDetails)0x0) {
      CVar9 = this[0x174];
    }
    (**(code **)(**(int **)(this + 0x170) + 0x20))(*(int **)(this + 0x170),CVar9);
    iVar14 = __aeabi_fcmpgt(*(undefined4 *)(param_1 + 0x40),0);
    if (iVar14 != 0) {
      piVar6 = *(int **)(this + 0x17c);
      pcVar15 = *(code **)(*piVar6 + 0x20);
      uVar12 = (uint)(byte)this[0x84];
      if (((uVar12 != 0) && (uVar12 = (uint)(byte)this[0x174], uVar12 != 0)) &&
         (uVar12 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(this + 0x78) + DAT_000d1904),']'),
         uVar12 != 0)) {
        uVar12 = 1;
      }
      (*pcVar15)(piVar6,uVar12);
    }
  }
  piVar6 = *(int **)(this + 0x170);
  pcVar15 = *(code **)(*piVar6 + 0x44);
  Vector<String>::elementAt((int)(&stack0x00000320 + iVar4));
  (*pcVar15)(piVar6,&stack0x00000320 + iVar4);
  String::~String((String *)(&stack0x00000320 + iVar4));
  if ((this[0x84] != (CharacterDetails)0x0) && (this[0x174] != (CharacterDetails)0x0)) {
    (**(code **)(**(int **)(this + 0x180) + 0x20))(*(int **)(this + 0x180),1);
    iVar14 = DAT_000d190c;
    if (param_1[0x34] == (Character)0x0) {
      if (*(int **)(*(int *)(this + 0x180) + 0x60) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)(this + 0x180) + 0x60) + 4))();
        *(undefined4 *)(*(int *)(this + 0x180) + 0x60) = 0;
      }
      iVar13 = *(int *)(this + 0x78);
      *(undefined4 *)(&stack0xfffffff4 + iVar4) = *(undefined4 *)(this + 0x180);
      pCVar7 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar13 + iVar14),0x11c,false);
      ImageButton::setImageAndResize(*(ImageButton **)(&stack0xfffffff4 + iVar4),pCVar7);
      iVar14 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0x78) + DAT_000d1904),'*');
      piVar6 = *(int **)(this + 0x16c);
      pcVar15 = *(code **)(*piVar6 + 0x20);
      if (iVar14 != 0) {
        iVar14 = 1;
      }
    }
    else {
      if (*(int **)(*(int *)(this + 0x180) + 0x60) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)(this + 0x180) + 0x60) + 4))();
        *(undefined4 *)(*(int *)(this + 0x180) + 0x60) = 0;
      }
      iVar13 = *(int *)(this + 0x78);
      *(undefined4 *)(&stack0xfffffff4 + iVar4) = *(undefined4 *)(this + 0x180);
      pCVar7 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(iVar13 + iVar14),DAT_000d1910,false);
      ImageButton::setImageAndResize(*(ImageButton **)(&stack0xfffffff4 + iVar4),pCVar7);
      piVar6 = *(int **)(this + 0x16c);
      iVar14 = 0;
      pcVar15 = *(code **)(*piVar6 + 0x20);
    }
    (*pcVar15)(piVar6,iVar14);
    *(undefined4 *)(&stack0xfffffff4 + iVar4) = *(undefined4 *)(this + 0x180);
    iVar14 = SmDev();
    uVar16 = *(undefined4 *)((int)&DAT_000d1908 + DAT_000d1914 + iVar14 * 4 + 2);
    uVar17 = *(undefined4 *)(this + 400);
    uVar11 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar4) = uVar11;
    __mulsf3(uVar16,uVar17);
    uVar23 = __mulsf3(*(undefined4 *)
                       (DAT_000d1918 + *(int *)(&stack0x00000004 + iVar4) * 4 + 0xd192a),
                      *(undefined4 *)(this + 400));
    ImageButton::setScale
              (*(ImageButton **)(&stack0xfffffff4 + iVar4),(float)uVar23,
               (float)((ulonglong)uVar23 >> 0x20));
  }
  String::~String((String *)(&stack0x00000448 + iVar4));
  String::~String((String *)(&stack0x00000438 + iVar4));
  String::~String((String *)(&stack0x00000058 + iVar4));
  FUN_000d261a(&stack0x00000038 + iVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


